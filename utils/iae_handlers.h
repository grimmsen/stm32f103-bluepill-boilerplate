#ifndef __IAE_HANDLERS_H__
#define __IAE_HANDLERS_H__

void (*__NMI_call)();
void (*__HardFault_call)();
void (*__MemManage_call)();
void (*__BusFault_call)();
void (*__UsageFault_call)();
void (*__SVCall_call)();
void (*__DebugMonitor_call)();
void (*__PendSV_call)();
void (*__SysTick_call)();
void (*__WWDG_call)();
void (*__PVD_call)();
void (*__TAMPER_call)();
void (*__RTC_call)();
void (*__FLASH_call)();
void (*__RCC_call)();
void (*__EXTI0_call)();
void (*__EXTI1_call)();
void (*__EXTI2_call)();
void (*__EXTI3_call)();
void (*__EXTI4_call)();
void (*__DMA1_Channel1_call)();
void (*__DMA1_Channel2_call)();
void (*__DMA1_Channel3_call)();
void (*__DMA1_Channel4_call)();
void (*__DMA1_Channel5_call)();
void (*__DMA1_Channel6_call)();
void (*__DMA1_Channel7_call)();
void (*__ADC1_2_call)();
void (*__CAN1_TX_call)();
void (*__CAN1_RX0_call)();
void (*__CAN1_RX1_call)();
void (*__CAN1_SCE_call)();
void (*__EXTI9_5_call)();
void (*__TIM1_BRK_call)();
void (*__TIM1_UP_call)();
void (*__TIM1_TRG_COM_call)();
void (*__TIM1_CC_call)();
void (*__TIM2_call)();
void (*__TIM3_call)();
void (*__TIM4_call)();
void (*__I2C1_EV_call)();
void (*__I2C1_ER_call)();
void (*__I2C2_EV_call)();
void (*__I2C2_ER_call)();
void (*__SPI1_call)();
void (*__SPI2_call)();
void (*__USART1_call)();
void (*__USART2_call)();
void (*__USART3_call)();
void (*__EXTI15_10_call)();
void (*__RTCAlarm_call)();
void (*__OTG_FS_WKUP_call)();
void (*__TIM5_call)();
void (*__SPI3_call)();
void (*__UART4_call)();
void (*__UART5_call)();
void (*__TIM6_call)();
void (*__TIM7_call)();
void (*__DMA2_Channel1_call)();
void (*__DMA2_Channel2_call)();
void (*__DMA2_Channel3_call)();
void (*__DMA2_Channel4_call)();
void (*__DMA2_Channel5_call)();
void (*__ETH_call)();
void (*__ETH_WKUP_call)();
void (*__CAN2_TX_call)();
void (*__CAN2_RX0_call)();
void (*__CAN2_RX1_call)();
void (*__CAN2_SCE_call)();
void (*__OTG_FS_call)();

void __Reset_set_handler();
void __NMI_set_handler();
void __HardFault_set_handler();
void __MemManage_set_handler();
void __BusFault_set_handler();
void __UsageFault_set_handler();
void __SVCall_set_handler();
void __DebugMonitor_set_handler();
void __PendSV_set_handler();
void __SysTick_set_handler();
void __WWDG_set_handler();
void __PVD_set_handler();
void __TAMPER_set_handler();
void __RTC_set_handler();
void __FLASH_set_handler();
void __RCC_set_handler();
void __EXTI0_set_handler();
void __EXTI1_set_handler();
void __EXTI2_set_handler();
void __EXTI3_set_handler();
void __EXTI4_set_handler();
void __DMA1_Channel1_set_handler();
void __DMA1_Channel2_set_handler();
void __DMA1_Channel3_set_handler();
void __DMA1_Channel4_set_handler();
void __DMA1_Channel5_set_handler();
void __DMA1_Channel6_set_handler();
void __DMA1_Channel7_set_handler();
void __ADC1_2_set_handler();
void __CAN1_TX_set_handler();
void __CAN1_RX0_set_handler();
void __CAN1_RX1_set_handler();
void __CAN1_SCE_set_handler();
void __EXTI9_5_set_handler();
void __TIM1_BRK_set_handler();
void __TIM1_UP_set_handler();
void __TIM1_TRG_COM_set_handler();
void __TIM1_CC_set_handler();
void __TIM2_set_handler();
void __TIM3_set_handler();
void __TIM4_set_handler();
void __I2C1_EV_set_handler();
void __I2C1_ER_set_handler();
void __I2C2_EV_set_handler();
void __I2C2_ER_set_handler();
void __SPI1_set_handler();
void __SPI2_set_handler();
void __USART1_set_handler();
void __USART2_set_handler();
void __USART3_set_handler();
void __EXTI15_10_set_handler();
void __RTCAlarm_set_handler();
void __OTG_FS_WKUP_set_handler();
void __TIM5_set_handler();
void __SPI3_set_handler();
void __UART4_set_handler();
void __UART5_set_handler();
void __TIM6_set_handler();
void __TIM7_set_handler();
void __DMA2_Channel1_set_handler();
void __DMA2_Channel2_set_handler();
void __DMA2_Channel3_set_handler();
void __DMA2_Channel4_set_handler();
void __DMA2_Channel5_set_handler();
void __ETH_set_handler();
void __ETH_WKUP_set_handler();
void __CAN2_TX_set_handler();
void __CAN2_RX0_set_handler();
void __CAN2_RX1_set_handler();
void __CAN2_SCE_set_handler();
void __OTG_FS_set_handler();
void __Reset_set_handler();
void __NMI_set_handler();
void __HardFault_set_handler();
void __MemManage_set_handler();
void __BusFault_set_handler();
void __UsageFault_set_handler();
void __SVCall_set_handler();
void __DebugMonitor_set_handler();
void __PendSV_set_handler();
void __SysTick_set_handler();
void __WWDG_set_handler();
void __PVD_set_handler();
void __TAMPER_set_handler();
void __RTC_set_handler();
void __FLASH_set_handler();
void __RCC_set_handler();
void __EXTI0_set_handler();
void __EXTI1_set_handler();
void __EXTI2_set_handler();
void __EXTI3_set_handler();
void __EXTI4_set_handler();
void __DMA1_Channel1_set_handler();
void __DMA1_Channel2_set_handler();
void __DMA1_Channel3_set_handler();
void __DMA1_Channel4_set_handler();
void __DMA1_Channel5_set_handler();
void __DMA1_Channel6_set_handler();
void __DMA1_Channel7_set_handler();
void __ADC1_2_set_handler();
void __CAN1_TX_set_handler();
void __CAN1_RX0_set_handler();
void __CAN1_RX1_set_handler();
void __CAN1_SCE_set_handler();
void __EXTI9_5_set_handler();
void __TIM1_BRK_set_handler();
void __TIM1_UP_set_handler();
void __TIM1_TRG_COM_set_handler();
void __TIM1_CC_set_handler();
void __TIM2_set_handler();
void __TIM3_set_handler();
void __TIM4_set_handler();
void __I2C1_EV_set_handler();
void __I2C1_ER_set_handler();
void __I2C2_EV_set_handler();
void __I2C2_ER_set_handler();
void __SPI1_set_handler();
void __SPI2_set_handler();
void __USART1_set_handler();
void __USART2_set_handler();
void __USART3_set_handler();
void __EXTI15_10_set_handler();
void __RTCAlarm_set_handler();
void __OTG_FS_WKUP_set_handler();
void __TIM5_set_handler();
void __SPI3_set_handler();
void __UART4_set_handler();
void __UART5_set_handler();
void __TIM6_set_handler();
void __TIM7_set_handler();
void __DMA2_Channel1_set_handler();
void __DMA2_Channel2_set_handler();
void __DMA2_Channel3_set_handler();
void __DMA2_Channel4_set_handler();
void __DMA2_Channel5_set_handler();
void __ETH_set_handler();
void __ETH_WKUP_set_handler();
void __CAN2_TX_set_handler();
void __CAN2_RX0_set_handler();
void __CAN2_RX1_set_handler();
void __CAN2_SCE_set_handler();
void __OTG_FS_set_handler();


void __Reset_handler();
void __NMI_handler();
void __HardFault_handler();
void __MemManage_handler();
void __BusFault_handler();
void __UsageFault_handler();
void __SVCall_handler();
void __DebugMonitor_handler();
void __PendSV_handler();
void __SysTick_handler();
void __WWDG_handler();
void __PVD_handler();
void __TAMPER_handler();
void __RTC_handler();
void __FLASH_handler();
void __RCC_handler();
void __EXTI0_handler();
void __EXTI1_handler();
void __EXTI2_handler();
void __EXTI3_handler();
void __EXTI4_handler();
void __DMA1_Channel1_handler();
void __DMA1_Channel2_handler();
void __DMA1_Channel3_handler();
void __DMA1_Channel4_handler();
void __DMA1_Channel5_handler();
void __DMA1_Channel6_handler();
void __DMA1_Channel7_handler();
void __ADC1_2_handler();
void __CAN1_TX_handler();
void __CAN1_RX0_handler();
void __CAN1_RX1_handler();
void __CAN1_SCE_handler();
void __EXTI9_5_handler();
void __TIM1_BRK_handler();
void __TIM1_UP_handler();
void __TIM1_TRG_COM_handler();
void __TIM1_CC_handler();
void __TIM2_handler();
void __TIM3_handler();
void __TIM4_handler();
void __I2C1_EV_handler();
void __I2C1_ER_handler();
void __I2C2_EV_handler();
void __I2C2_ER_handler();
void __SPI1_handler();
void __SPI2_handler();
void __USART1_handler();
void __USART2_handler();
void __USART3_handler();
void __EXTI15_10_handler();
void __RTCAlarm_handler();
void __OTG_FS_WKUP_handler();
void __TIM5_handler();
void __SPI3_handler();
void __UART4_handler();
void __UART5_handler();
void __TIM6_handler();
void __TIM7_handler();
void __DMA2_Channel1_handler();
void __DMA2_Channel2_handler();
void __DMA2_Channel3_handler();
void __DMA2_Channel4_handler();
void __DMA2_Channel5_handler();
void __ETH_handler();
void __ETH_WKUP_handler();
void __CAN2_TX_handler();
void __CAN2_RX0_handler();
void __CAN2_RX1_handler();
void __CAN2_SCE_handler();
void __OTG_FS_handler();

#endif