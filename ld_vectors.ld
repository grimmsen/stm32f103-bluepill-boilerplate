        LONG(ORIGIN(RAM)+LENGTH(RAM));                 /* STACK POINTER */
        LONG(main | 1);                                /* CALL AFTER RESET */
        LONG(__NMI_handler|1);
        LONG(__HardFault_handler|1);
        LONG(__MemManage_handler|1);
        LONG(__BusFault_handler|1);
        LONG(__UsageFault_handler|1);
        . = 0x2c;                                      /* Reserved */ 
        LONG(__SVCall_handler|1);
        LONG(__DebugMonitor_handler|1);
        . = 0x38;                                      /* Reserved */
        LONG(__PendSV_handler|1);
        LONG(__SysTick_handler|1);
        LONG(__WWDG_handler|1);
        LONG(__PVD_handler|1);
        LONG(__TAMPER_handler|1);
        LONG(__RTC_handler|1);
        LONG(__FLASH_handler|1);
        LONG(__RCC_handler|1);
        LONG(__EXTI0_handler|1);
        LONG(__EXTI1_handler|1);
        LONG(__EXTI2_handler|1);
        LONG(__EXTI3_handler|1);
        LONG(__EXTI4_handler|1);
        LONG(__DMA1_Channel1_handler|1);
        LONG(__DMA1_Channel2_handler|1);
        LONG(__DMA1_Channel3_handler|1);
        LONG(__DMA1_Channel4_handler|1);
        LONG(__DMA1_Channel5_handler|1);
        LONG(__DMA1_Channel6_handler|1);
        LONG(__DMA1_Channel7_handler|1);
        LONG(__ADC1_2_handler|1);
        LONG(__CAN1_TX_handler|1);
        LONG(__CAN1_RX0_handler|1);
        LONG(__CAN1_RX1_handler|1);
        LONG(__CAN1_SCE_handler|1);
        LONG(__EXTI9_5_handler|1);
        LONG(__TIM1_BRK_handler|1);
        LONG(__TIM1_UP_handler|1);
        LONG(__TIM1_TRG_COM_handler|1);
        LONG(__TIM1_CC_handler|1);
        LONG(__TIM2_handler|1);
        LONG(__TIM3_handler|1);
        LONG(__TIM4_handler|1);
        LONG(__I2C1_EV_handler|1);
        LONG(__I2C1_ER_handler|1);
        LONG(__I2C2_EV_handler|1);
        LONG(__I2C2_ER_handler|1);
        LONG(__SPI1_handler|1);
        LONG(__SPI2_handler|1);
        LONG(__USART1_handler|1);
        LONG(__USART2_handler|1);
        LONG(__USART3_handler|1);
        LONG(__EXTI15_10_handler|1);
        LONG(__RTCAlarm_handler|1);
        LONG(__OTG_FS_WKUP_handler|1);
        LONG(__TIM5_handler|1);
        LONG(__SPI3_handler|1);
        LONG(__UART4_handler|1);
        LONG(__UART5_handler|1);
        LONG(__TIM6_handler|1);
        LONG(__TIM7_handler|1);
        LONG(__DMA2_Channel1_handler|1);
        LONG(__DMA2_Channel2_handler|1);
        LONG(__DMA2_Channel3_handler|1);
        LONG(__DMA2_Channel4_handler|1);
        LONG(__DMA2_Channel5_handler|1);
        LONG(__ETH_handler|1);
        LONG(__ETH_WKUP_handler|1);
        LONG(__CAN2_TX_handler|1);
        LONG(__CAN2_RX0_handler|1);
        LONG(__CAN2_RX1_handler|1);
        LONG(__CAN2_SCE_handler|1);
        LONG(__OTG_FS_handler|1);
