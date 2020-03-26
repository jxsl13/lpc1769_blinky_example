#pragma once


namespace holmes
{
namespace internal
{

enum class IRQType : uint32_t {
    /******  Cortex-M4 Processor Exceptions Numbers ****************************************************************/
    
    // Exceptions are not supported, because they do not explicitly define expected or wanted behaviour, 
    // but obviously show errors that were made.

    /******  STM32 specific Interrupt Numbers **********************************************************************/
    IRQn_WWDG                   = 0,      /*!< Window WatchDog Interrupt                                         */
    IRQn_PVD                    = 1,      /*!< PVD through EXTI Line detection Interrupt                         */
    IRQn_TAMP_STAMP             = 2,      /*!< Tamper and TimeStamp interrupts through the EXTI line             */
    IRQn_RTC_WKUP               = 3,      /*!< RTC Wakeup interrupt through the EXTI line                        */
    IRQn_FLASH                  = 4,      /*!< FLASH global Interrupt                                            */
    IRQn_RCC                    = 5,      /*!< RCC global Interrupt                                              */
    IRQn_EXTI0                  = 6,      /*!< EXTI Line0 Interrupt                                              */
    IRQn_EXTI1                  = 7,      /*!< EXTI Line1 Interrupt                                              */
    IRQn_EXTI2                  = 8,      /*!< EXTI Line2 Interrupt                                              */
    IRQn_EXTI3                  = 9,      /*!< EXTI Line3 Interrupt                                              */
    IRQn_EXTI4                  = 10,     /*!< EXTI Line4 Interrupt                                              */
    IRQn_DMA1_Stream0           = 11,     /*!< DMA1 Stream 0 global Interrupt                                    */
    IRQn_DMA1_Stream1           = 12,     /*!< DMA1 Stream 1 global Interrupt                                    */
    IRQn_DMA1_Stream2           = 13,     /*!< DMA1 Stream 2 global Interrupt                                    */
    IRQn_DMA1_Stream3           = 14,     /*!< DMA1 Stream 3 global Interrupt                                    */
    IRQn_DMA1_Stream4           = 15,     /*!< DMA1 Stream 4 global Interrupt                                    */
    IRQn_DMA1_Stream5           = 16,     /*!< DMA1 Stream 5 global Interrupt                                    */
    IRQn_DMA1_Stream6           = 17,     /*!< DMA1 Stream 6 global Interrupt                                    */
    IRQn_ADC                    = 18,     /*!< ADC1, ADC2 and ADC3 global Interrupts                             */
    IRQn_CAN1_TX                = 19,     /*!< CAN1 TX Interrupt                                                 */
    IRQn_CAN1_RX0               = 20,     /*!< CAN1 RX0 Interrupt                                                */
    IRQn_CAN1_RX1               = 21,     /*!< CAN1 RX1 Interrupt                                                */
    IRQn_CAN1_SCE               = 22,     /*!< CAN1 SCE Interrupt                                                */
    IRQn_EXTI9_5                = 23,     /*!< External Line[9:5] Interrupts                                     */
    IRQn_TIM1_BRK_TIM9          = 24,     /*!< TIM1 Break interrupt and TIM9 global interrupt                    */
    IRQn_TIM1_UP_TIM10          = 25,     /*!< TIM1 Update Interrupt and TIM10 global interrupt                  */
    IRQn_TIM1_TRG_COM_TIM11     = 26,     /*!< TIM1 Trigger and Commutation Interrupt and TIM11 global interrupt */
    IRQn_TIM1_CC                = 27,     /*!< TIM1 Capture Compare Interrupt                                    */
    IRQn_TIM2                   = 28,     /*!< TIM2 global Interrupt                                             */
    IRQn_TIM3                   = 29,     /*!< TIM3 global Interrupt                                             */
    IRQn_TIM4                   = 30,     /*!< TIM4 global Interrupt                                             */
    IRQn_I2C1_EV                = 31,     /*!< I2C1 Event Interrupt                                              */
    IRQn_I2C1_ER                = 32,     /*!< I2C1 Error Interrupt                                              */
    IRQn_I2C2_EV                = 33,     /*!< I2C2 Event Interrupt                                              */
    IRQn_I2C2_ER                = 34,     /*!< I2C2 Error Interrupt                                              */  
    IRQn_SPI1                   = 35,     /*!< SPI1 global Interrupt                                             */
    IRQn_SPI2                   = 36,     /*!< SPI2 global Interrupt                                             */
    IRQn_USART1                 = 37,     /*!< USART1 global Interrupt                                           */
    IRQn_USART2                 = 38,     /*!< USART2 global Interrupt                                           */
    IRQn_USART3                 = 39,     /*!< USART3 global Interrupt                                           */
    IRQn_EXTI15_10              = 40,     /*!< External Line[15:10] Interrupts                                   */
    IRQn_RTC_Alarm              = 41,     /*!< RTC Alarm (A and B) through EXTI Line Interrupt                   */
    IRQn_OTG_FS_WKUP            = 42,     /*!< USB OTG FS Wakeup through EXTI line interrupt                     */    
    IRQn_TIM8_BRK_TIM12         = 43,     /*!< TIM8 Break Interrupt and TIM12 global interrupt                   */
    IRQn_TIM8_UP_TIM13          = 44,     /*!< TIM8 Update Interrupt and TIM13 global interrupt                  */
    IRQn_TIM8_TRG_COM_TIM14     = 45,     /*!< TIM8 Trigger and Commutation Interrupt and TIM14 global interrupt */
    IRQn_TIM8_CC                = 46,     /*!< TIM8 Capture Compare Interrupt                                    */
    IRQn_DMA1_Stream7           = 47,     /*!< DMA1 Stream7 Interrupt                                            */
    IRQn_FSMC                   = 48,     /*!< FSMC global Interrupt                                             */
    IRQn_SDIO                   = 49,     /*!< SDIO global Interrupt                                             */
    IRQn_TIM5                   = 50,     /*!< TIM5 global Interrupt                                             */
    IRQn_SPI3                   = 51,     /*!< SPI3 global Interrupt                                             */
    IRQn_UART4                  = 52,     /*!< UART4 global Interrupt                                            */
    IRQn_UART5                  = 53,     /*!< UART5 global Interrupt                                            */
    IRQn_TIM6_DAC               = 54,     /*!< TIM6 global and DAC1&2 underrun error  interrupts                 */
    IRQn_TIM7                   = 55,     /*!< TIM7 global interrupt                                             */
    IRQn_DMA2_Stream0           = 56,     /*!< DMA2 Stream 0 global Interrupt                                    */
    IRQn_DMA2_Stream1           = 57,     /*!< DMA2 Stream 1 global Interrupt                                    */
    IRQn_DMA2_Stream2           = 58,     /*!< DMA2 Stream 2 global Interrupt                                    */
    IRQn_DMA2_Stream3           = 59,     /*!< DMA2 Stream 3 global Interrupt                                    */
    IRQn_DMA2_Stream4           = 60,     /*!< DMA2 Stream 4 global Interrupt                                    */
    IRQn_ETH                    = 61,     /*!< Ethernet global Interrupt                                         */
    IRQn_ETH_WKUP               = 62,     /*!< Ethernet Wakeup through EXTI line Interrupt                       */
    IRQn_CAN2_TX                = 63,     /*!< CAN2 TX Interrupt                                                 */
    IRQn_CAN2_RX0               = 64,     /*!< CAN2 RX0 Interrupt                                                */
    IRQn_CAN2_RX1               = 65,     /*!< CAN2 RX1 Interrupt                                                */
    IRQn_CAN2_SCE               = 66,     /*!< CAN2 SCE Interrupt                                                */
    IRQn_OTG_FS                 = 67,     /*!< USB OTG FS global Interrupt                                       */
    IRQn_DMA2_Stream5           = 68,     /*!< DMA2 Stream 5 global interrupt                                    */
    IRQn_DMA2_Stream6           = 69,     /*!< DMA2 Stream 6 global interrupt                                    */
    IRQn_DMA2_Stream7           = 70,     /*!< DMA2 Stream 7 global interrupt                                    */
    IRQn_USART6                 = 71,     /*!< USART6 global interrupt                                           */ 
    IRQn_I2C3_EV                = 72,     /*!< I2C3 event interrupt                                              */
    IRQn_I2C3_ER                = 73,     /*!< I2C3 error interrupt                                              */
    IRQn_OTG_HS_EP1_OUT         = 74,     /*!< USB OTG HS End Point 1 Out global interrupt                       */
    IRQn_OTG_HS_EP1_IN          = 75,     /*!< USB OTG HS End Point 1 In global interrupt                        */
    IRQn_OTG_HS_WKUP            = 76,     /*!< USB OTG HS Wakeup through EXTI interrupt                          */
    IRQn_OTG_HS                 = 77,     /*!< USB OTG HS global interrupt                                       */
    IRQn_DCMI                   = 78,     /*!< DCMI global interrupt                                             */
    IRQn_CRYP                   = 79,     /*!< CRYP crypto global interrupt                                      */
    IRQn_HASH_RNG               = 80,      /*!< Hash and Rng global interrupt                                     */
    IRQn_FPU                    = 81      /*!< FPU global interrupt                                              */
};

}
}