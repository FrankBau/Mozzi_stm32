This is a bare metal project for the STM Nucleo-L432KC board using CMSIS core headers, Mozzi sound synthesis library, and FixMath  fixed point arithmetic library.

12-bit mono audio output via DAC1 channel 1 on pin PA4.

# clone
```
git clone --recursive https://github.com/FrankBau/Mozzi_stm32.git
cd Mozzi_stm32
```

# build
This is a Visual Studio Code project using STM32 extension: https://marketplace.visualstudio.com/items?itemName=stmicroelectronics.stm32-vscode-extension

Alternatively, you can build directly using cmaker, ninja, and the Arm GNU Toolchain (arm-none-eabi-gcc and friends):

```
Mozzi_stm32> cmake -B build -G Ninja
Mozzi_stm32> cmake --build build
```

The `build/stm32.bin` can be copied onto the STM Nucleo-L432KC board "USB drive".
