# Read me

Inspiration for this setup comes from https://medium.com/@patrick.elmquist/separate-keymap-repo-for-qmk-136ff5a419bd

## Building keymaps

- `make setup` to install the submodules
- `make all` to build keymaps conforming to qweighteen standard
- `make totem` to build one keymap (in this case the totem).
- `make clean` to clean up repo before committing

## Keyboards

![My Totem](/images/totem.jpg)

After a couple of years experience with normal and low profile, I think I'm leaning towards sticking with low profile and ultra light switches (pink chocs, aka gchocs). My main keyboard right now is the Geist Totem with more keys then I need.

I named my [keymap Qweighteen and wrote a blogpost about its genesis](https://reinierladan.nl/blog/2023/qweighteen-keymap/). @benvallack is the main inspiration for going 18-keys only on the non-base layers.

### The keymap

![Keymap base 32 layout](./images/keymap.png?raw=true)

![Mehmap](./images/mehmap.png?raw=true)

### What can it do

With this [QMK](https://beta.docs.qmk.fm) keymap I try to accomplish a couple of things:

- Keep qwerty my main layout for now, except for P at right pinky
- Only use 32 keys on base layer and focus on 18 keys on other layers for usability (and sometime in the future migrate to a 100% 18-key keyboard).
- Minimal number of layers for usability
- Dedicated CMD and SHIFT keys and [home row mods](https://precondition.github.io/home-row-mods) for all the mods
- Easy sync between all my keyboards (but my main focus right now is the Totem, so other keymaps can be out of date)
- Minimize pinky use on both sides for ergonomic reasons
- No tap dances (can't get them to work comfortable)
- Space without meh-key on hold is present on Extend layer to use when selection stuff in graphical editor or screenshot tool
- Caps Word is a more convenient option compared to Capslock. After you typed a single word in all capital letters, the keyboard automatically returns to lowercase letters.
- Minimal use of combos (currently two in use)
- Lock layers with alternative right thumb key
- Base layer is always available by tapping leader key position (when on base layer, hammerspoon will show the hammermenu so you know you are on the base layer)
- A CCCV key (called `CP` on keymap) to suck something into the key by holding, and spitting it out by tapping. (CMD-C hold, CMD-V tap)

### Todo's, needs and wants

- I've tried working with a mouse layer, but it's not working for me right now. Will try again when absolutely comfortable with the current keymap.
- I can do a lot more on the Extend layer for Mouse + keyboard use.
- Find a place for media controls and F keys. Probably need new layer.
- Learn to get value out of a repeat key. Tried it once, didn't stick. Could replace the leader key on right thumb.

### Other keyboards in the repo

- Moonlander
- Boardsource Technik
- Boardsource Microdox
- Keychron Q9
