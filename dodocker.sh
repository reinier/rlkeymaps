#!/bin/bash

# init submodule
git submodule update --init --recursive
git submodule update --remote

# cleanup old symlinks
rm -rf qmk_firmware/keyboards/keychron/q9/ansi_encoder/keymaps/reinierq9

# add new symlinks
cp -rf $PWD/keychron-q9 qmk_firmware/keyboards/keychron/q9/ansi_encoder/keymaps/reinierq9

# run build
cd ./qmk_firmware/
bash util/docker_build.sh keychron/q9/ansi_encoder:reinierq9

# cleanup symlinks
cd ../
rm -rf qmk_firmware/keyboards/keychron/q9/ansi_encoder/keymaps/reinierq9