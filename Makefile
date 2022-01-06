##
# zmk-config
#
# @file
# @version 0.1

_build_left_kyria:
	west build -s zmk/app -d build/left -b nice_nano_v2 -- -DZMK_CONFIG="$(shell pwd)/config" -DSHIELD=kyria_left ; \
	mkdir -p build/artifacts ; \
	if [ -f build/left/zephyr/zmk.uf2 ] ; then \
		cp build/left/zephyr/zmk.uf2 "build/artifacts/kyria_left-nice_nano_v2-zmk.uf2"; \
	elif [ -f build/left/zephyr/zmk.hex ] ; then \
		cp build/left/zephyr/zmk.hex "build/artifacts/kyria_left-nice_nano_v2-zmk.hex"; \
	fi

_build_right_kyria:
	west build -s zmk/app -d build/right -b nice_nano_v2 -- -DZMK_CONFIG="$(shell pwd)/config" -DSHIELD=kyria_right ; \
	mkdir -p build/artifacts ; \
	if [ -f build/right/zephyr/zmk.uf2 ] ; then \
		cp build/right/zephyr/zmk.uf2 "build/artifacts/kyria_right-nice_nano_v2-zmk.uf2"; \
	elif [ -f build/right/zephyr/zmk.hex ] ; then \
		cp build/right/zephyr/zmk.hex "build/artifacts/kyria_right-nice_nano_v2-zmk.hex"; \
	fi

build: _build_left_kyria _build_right_kyria


_mount_left:
	@DEV=$(shell readlink -e /dev/disk/by-id/*Adafruit*); \
	ME=$(shell whoami); \
	if [ -n "$${DEV}" ]; then \
		echo "found Kyria mounting $${DEV} to /run/media/daf/NICENANO…"; \
		sudo mkdir -p /run/media/$${ME}/NICENANO ; \
		sudo mount "$${DEV}" /run/media/$${ME}/NICENANO ; \
	else \
		echo "couldn't find Kyria's nice!nano (try double clicking the reset button)" ; \
		sudo rmdir /run/media/$${ME}/NICENANO &> /dev/null ; \
		exit 1; \
	fi

_flash_left:
	@ME=$(shell whoami); \
	sudo cp build/artifacts/kyria_left-nice_nano_v2-zmk.uf2 /run/media/$${ME}/NICENANO

flash: _mount_left _flash_left
	@echo "flashing done. Wait for the shiny blue LED to go blip blup."


update:
	@west update
	@west zephyr-export

# end
