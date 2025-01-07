This is a bare metal project for the STM Nucleo-L432KC board using CMSIS core headers, Mozzi sound synthesis library, and FixMath  fixed point arithmetic library.

The project was drafted in few days and now sits and waits for improvements :)

# clone
```
git clone --recursive https://github.com/FrankBau/Mozzi_stm32.git
cd Mozzi_stm32
```

# build
This is a Visual Studio Code project using STM32 extension: https://marketplace.visualstudio.com/items?itemName=stmicroelectronics.stm32-vscode-extension

Alternatively, you can build directly using cmake, ninja, and the Arm GNU Toolchain (arm-none-eabi-gcc and friends):

```
Mozzi_stm32> cmake -B build -G Ninja
Mozzi_stm32> cmake --build build
```

Finally, the `build/stm32.bin` file should be copied to the STM Nucleo-L432KC board "USB drive" which will program the STM32L432KC flash memory. 

# run

DAC1 channel 1 on pin PA4 provides the analog audio output signal. 
The 12-Bit digital DAC levels are limited in software to 100 .. 1123 providing consumer-level line-out compatible voltages with little foot- and headroom.   
The audio signal can be fed to an analog line-in RCA ("chinch") connector like to a USB analog audio adaptor. A decoupling C is recommended.

The DAC is used with an internal buffer, providing only about 5.1k impedance.
A better solution would be full 12-bit digital output range with an external voltage convertor, ideally using an active convertor (opamp) with a low impedance output.
