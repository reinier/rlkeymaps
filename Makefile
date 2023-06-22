USER = reinier
KEYBOARDS = totem technik

# keyboard name
NAME_totem = totem
NAME_technik = boardsource/technik_o

all: $(KEYBOARDS)

.PHONY: $(KEYBOARDS)
$(KEYBOARDS):
	# init submodule
	git submodule update --init --recursive
	git submodule update --remote

	# cleanup old symlinks
	rm -rf qmk-config-totem/totem/keymaps/$(USER)
	rm -rf qmk_firmware/keyboards/totem
	rm -rf qmk_firmware/keyboards/boardsource/technik_o/keymaps/$(USER)
	rm -rf qmk_firmware/users/$(USER)

	# add new symlinks
	ln -s $(shell pwd)/totem qmk-config-totem/totem/keymaps/$(USER)
	ln -s $(shell pwd)/qmk-config-totem/totem qmk_firmware/keyboards/totem
	ln -s $(shell pwd)/technik qmk_firmware/keyboards/boardsource/technik_o/keymaps/$(USER)
	ln -s $(shell pwd)/user qmk_firmware/users/$(USER)

	# run lint check
	# cd qmk_firmware; qmk lint -km $(USER) -kb $(NAME_$@)

	# run build
	make BUILD_DIR=$(shell pwd)/build -j1 -C qmk_firmware $(NAME_$@):$(USER)

	# cleanup symlinks
	rm -rf qmk-config-totem/totem/keymaps/$(USER)
	rm -rf qmk_firmware/keyboards/totem
	rm -rf qmk_firmware/keyboards/boardsource/technik_o/keymaps/$(USER)
	rm -rf qmk_firmware/users/$(USER)

.PHONY: q9
q9:

	# init submodule
	git submodule update --init --recursive
	git submodule update --remote

	# cleanup old symlinks
	rm -rf qmk_firmware/keyboards/keychron/q9/ansi_encoder/keymaps/reinierq9

	# add new symlinks
	ln -s $(shell pwd)/keychron-q9 qmk_firmware/keyboards/keychron/q9/ansi_encoder/keymaps/reinierq9

	# run build
	make BUILD_DIR=$(shell pwd)/build -j1 -C qmk_firmware keychron/q9/ansi_encoder:reinierq9

	# cleanup symlinks
	rm -rf qmk_firmware/keyboards/keychron/q9/ansi_encoder/keymaps/reinierq9

.PHONY: microdox
microdox:

	# init submodule
	git submodule update --init --recursive
	git submodule update --remote

	# cleanup old symlinks
	rm -rf qmk_firmware/keyboards/boardsource/microdox/keymaps/reiniermicrodox

	# add new symlinks
	ln -s $(shell pwd)/microdox qmk_firmware/keyboards/boardsource/microdox/keymaps/reiniermicrodox

	# run build
	make BUILD_DIR=$(shell pwd)/build -j1 -C qmk_firmware boardsource/microdox/v1:reiniermicrodox

	# cleanup symlinks
	rm -rf qmk_firmware/keyboards/boardsource/microdox/keymaps/reiniermicrodox

.PHONY: moonlander
moonlander:

	# init submodule
	git submodule update --init --recursive
	git submodule update --remote

	# cleanup old symlinks
	rm -rf qmk_firmware/keyboards/moonlander/keymaps/reiniermoonlander

	# add new symlinks
	ln -s $(shell pwd)/moonlander qmk_firmware/keyboards/moonlander/keymaps/reiniermoonlander

	# run build
	make BUILD_DIR=$(shell pwd)/build -j1 -C qmk_firmware moonlander:reiniermoonlander

	# cleanup symlinks
	rm -rf qmk_firmware/keyboards/moonlander/keymaps/reiniermoonlander

clean:
	rm -rf qmk-config-totem/totem/keymaps/$(USER)
	rm -rf qmk_firmware/keyboards/totem
	rm -rf qmk_firmware/keyboards/boardsource/technik_o/keymaps/$(USER)
	rm -rf qmk_firmware/keyboards/keychron/q9/ansi_encoder/keymaps/reinierq9
	rm -rf qmk_firmware/keyboards/boardsource/microdox/keymaps/reiniermicrodox
	rm -rf qmk_firmware/keyboards/moonlander/keymaps/reiniermoonlander
	rm -rf qmk_firmware/users/$(USER)
	rm -rf ./build/
	rm -rf ./qmk-config-totem/
	rm -rf ./qmk_firmware/

setup:
	git clone --recurse-submodules --remote-submodules https://github.com/qmk/qmk_firmware.git
	git clone --recurse-submodules --remote-submodules https://github.com/GEIGEIGEIST/qmk-config-totem.git

refresh:
	rm -rf qmk-config-totem/totem/keymaps/$(USER)
	rm -rf qmk_firmware/keyboards/totem
	rm -rf qmk_firmware/keyboards/boardsource/technik_o/keymaps/$(USER)
	rm -rf qmk_firmware/keyboards/keychron/q9/ansi_encoder/keymaps/reinierq9
	rm -rf qmk_firmware/keyboards/boardsource/microdox/keymaps/reiniermicrodox
	rm -rf qmk_firmware/keyboards/moonlander/keymaps/reiniermoonlander
	rm -rf qmk_firmware/users/$(USER)
	rm -rf ./build/
	rm -rf ./qmk-config-totem/
	rm -rf ./qmk_firmware/

	git clone --recurse-submodules --remote-submodules https://github.com/qmk/qmk_firmware.git
	git clone --recurse-submodules --remote-submodules https://github.com/GEIGEIGEIST/qmk-config-totem.git
