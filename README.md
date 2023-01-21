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

thanks to seizure salad for telling me how mac works

windows version: https://github.com/Mlemix/roblox-print
windows rust version: https://github.com/Mlemix/rust-roblox-print