This is a bare metal project for the STM Nucleo-L432KC board using CMSIS core headers, Mozzi sound synthesis library, and FixMath  fixed point arithmetic library.

The project was drfted in few days and now waits for improvements :)

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

# run

DAC1 channel 1 on pin PA4 provides the analog audio output signal. 
The 12-Bit digital levels are limited in software to 100 .. 1123 providing consumer-level line-out compatible voltages.   
The audio signal can be fed to an analog line-in RCA ("chinch") connector like to a USB analog audio adaptor. A decoupling C is recommended.

A better solution would be full 12-bit digital output range with an external voltage convertor, ideally an active convertor (opamp) with a low impedance output.
At ther moment, the DAC output is used with an internal buffer, providing only about 5.1k impedance.
