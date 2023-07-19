#!/bin/bash

# init submodule
git submodule update --init --recursive
git submodule update --remote

# cleanup old symlinks
rm -rf qmk_firmware/keyboards/keychron/q9/ansi_encoder/keymaps/reinierq9
rm -rf qmk-config-totem/totem/keymaps/reinier
rm -rf qmk_firmware/keyboards/totem
rm -rf qmk_firmware/users/reinier

# copy to dirs
cp -rf $PWD/keychron-q9 qmk_firmware/keyboards/keychron/q9/ansi_encoder/keymaps/reinierq9
cp -rf $PWD/totem qmk-config-totem/totem/keymaps/reinier
cp -rf $PWD/qmk-config-totem/totem qmk_firmware/keyboards/totem
cp -rf $PWD/user qmk_firmware/users/reinier

# change dir to make docker commands work
cd ./qmk_firmware/

# run builds
# comment out keyboards that you don't want to build
# bash util/docker_build.sh keychron/q9/ansi_encoder:reinierq9
bash util/docker_build.sh totem:reinier

# cleanup symlinks
cd ../
rm -rf qmk_firmware/keyboards/keychron/q9/ansi_encoder/keymaps/reinierq9
rm -rf qmk-config-totem/totem/keymaps/reinier
rm -rf qmk_firmware/keyboards/totem
rm -rf qmk_firmware/users/reinier