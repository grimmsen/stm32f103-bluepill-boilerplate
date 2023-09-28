#include <stdint.h>
#include <stm32f10x.h>
#include "utils/clock.h"
#include "utils/gpio.h"

void delay(uint32_t msec) {
  for (uint32_t j=0; j < 1000UL * msec; j++) {
    __NOP();
  }
}

int main(void) {
  int onoff=0;
  clock_set_speed(72);
  gpio_init_all();
  gpio_pin_mode(GPIOC,13,GPIO_MODE_OUTPUT);
  gpio_init_all();
  while(1) {
    delay(1000);
    if(onoff==0) {
      onoff=1;
      gpio_pin_write(GPIOC,13,LOW);
    } else {
      onoff=0;
      gpio_pin_write(GPIOC,13,HIGH);
    }
  }
}