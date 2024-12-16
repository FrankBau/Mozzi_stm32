#include <stm32l432xx.h>

void SystemInit(void) {
    // enable floating point unit (FPU) // see PM0214 Rev 10
    SCB->CPACR |= ((3UL << 10*2) | (3UL << 11*2));
}
