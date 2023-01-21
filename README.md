# roblox-print-mac
call ROBLOX's print function using the power of c++ on MacOS!!!

how to use:
```
1. build this with cmake
2. remove roblox's signature
codesign --remove-signature /path/to/RobloxPlayer
3. inject (if you chose to do it this way, add a sleep so you have enough time to get into a game)
sudo DYLD_INSERT_LIBRARIES="/path/to/roblox-print-mac.dylib" /path/to/RobloxPlayer
```

this was written and tested on a 2022 macbook air running MacOS Ventura 13.0.1<br/>
thanks to seizure salad for telling me how mac works

rust version: https://github.com/Mlemix/rust-roblox-print-mac</br>
windows version: https://github.com/Mlemix/roblox-print<br/>
windows rust version: https://github.com/Mlemix/rust-roblox-print
