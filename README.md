# Read me

Inspiration for this setup comes from https://medium.com/@patrick.elmquist/separate-keymap-repo-for-qmk-136ff5a419bd

Clone repo and setup sub modules:
- `git clone --recurse-submodules --remote-submodules https://github.com/qmk/qmk_firmware.git`
- `git clone --recurse-submodules --remote-submodules https://github.com/GEIGEIGEIST/qmk-config-totem.git`
- `git submodule update --init --recursive`

## Building keymaps

- `make all` to build keymaps
- `make clean` to clean up repo before committing
