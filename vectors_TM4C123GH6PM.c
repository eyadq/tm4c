/*
 * This file is part of the µOS++ distribution.
 *   (https://github.com/micro-os-plus)
 * Copyright (c) 2014 Liviu Ionescu.
 *
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation
 * files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use,
 * copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom
 * the Software is furnished to do so, subject to the following
 * conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
 * OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 * HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
 * WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

// ----------------------------------------------------------------------------

#include "cortexm/ExceptionHandlers.h"

// ----------------------------------------------------------------------------

void __attribute__((weak))
Default_Handler(void);

// Forward declaration of the specific IRQ handlers. These are aliased
// to the Default_Handler, which is a 'forever' loop. When the application
// defines a handler (with the same name), this will automatically take
// precedence over these weak definitions
//
// TODO: Rename this and add the actual routines here.

//void __attribute__ ((weak, alias ("Default_Handler")))
//DeviceInterrupt_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOA_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOB_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOC_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOD_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOE_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))UART0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))UART1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))SSI0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))I2C0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))PMW0_FAULT_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))PWM0_0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))PWM0_1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))PWM0_2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))QEI0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))ADC0SS0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))ADC0SS1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))ADC0SS2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))ADC0SS3_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WDT0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))TIMER0A_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))TIMER0B_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))TIMER1A_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))TIMER1B_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))TIMER2A_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))TIMER2B_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))COMP0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))COMP1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))COMP2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))SYSCTL_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))FLASH_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOF_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOG_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOH_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))UART2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))SSI1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))TIMER3A_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))TIMER3B_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))I2C1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))QEI1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))CAN0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))CAN1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))CAN2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))HIB_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))USB0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))PWM0_3_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))UDMA_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))UDMAERR_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))ADC1SS0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))ADC1SS1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))ADC1SS2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))ADC1SS3_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOJ_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOK_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOL_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))SSI2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))SSI3_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))UART3_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))UART4_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))UART5_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))UART6_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))UART7_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))I2C2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))I2C3_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))TIMER4A_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))TIMER4B_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))TIMER5A_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))TIMER5B_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WTIMER0A_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WTIMER0B_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WTIMER1A_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WTIMER1B_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WTIMER2A_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WTIMER2B_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WTIMER3A_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WTIMER3B_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WTIMER4A_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WTIMER4B_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WTIMER5A_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))WTIMER5B_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))FPU_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))I2C4_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))I2C5_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOM_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPION_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))QEI2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOP0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOP1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOP2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOP3_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOP4_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOP5_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOP6_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOP7_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOQ0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOQ1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOQ2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOQ3_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOQ4_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOQ5_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOQ6_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOQ7_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOR_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))GPIOS_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))PMW1_0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))PWM1_1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))PWM1_2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))PWM1_3_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))PWM1_FAULT_Handler(void);


// ----------------------------------------------------------------------------

extern unsigned int _estack;

typedef void
(* const pHandler)(void);

// ----------------------------------------------------------------------------

// The vector table.
// This relies on the linker script to place at correct location in memory.

__attribute__ ((section(".isr_vector"),used))
pHandler __isr_vectors[] =
  { //
    (pHandler) &_estack,                          // The initial stack pointer
        Reset_Handler,                            // The reset handler

        NMI_Handler,                              // The NMI handler
        HardFault_Handler,                        // The hard fault handler

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
        MemManage_Handler,                        // The MPU fault handler
        BusFault_Handler,// The bus fault handler
        UsageFault_Handler,// The usage fault handler
#else
        0, 0, 0,				  // Reserved
#endif
        0,                                        // Reserved
        0,                                        // Reserved
        0,                                        // Reserved
        0,                                        // Reserved
        SVC_Handler,                              // SVCall handler
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
        DebugMon_Handler,                         // Debug monitor handler
#else
        0,					  // Reserved
#endif
        0,                                        // Reserved
        PendSV_Handler,                           // The PendSV handler
        SysTick_Handler,                          // The SysTick handler

        // ----------------------------------------------------------------------
        // TM4C123GH6PM vectors
        //DeviceInterrupt_Handler,                  // Device specific
        GPIOA_Handler,                            // GPIO Port A
        GPIOB_Handler,                            // GPIO Port B
        GPIOC_Handler,                            // GPIO Port C
        GPIOD_Handler,                            // GPIO Port D
        GPIOE_Handler,                            // GPIO Port E
        UART0_Handler,                            // UART0 Rx and Tx
        UART1_Handler,                            // UART1 Rx and Tx
        SSI0_Handler,                             // SSI0 Rx and Tx
        I2C0_Handler,                             // I2C0 Master and Slave
        PMW0_FAULT_Handler,                       // PWM Fault
        PWM0_0_Handler,                           // PWM Generator 0
        PWM0_1_Handler,                           // PWM Generator 1
        PWM0_2_Handler,                           // PWM Generator 2
        QEI0_Handler,                             // Quadrature Encoder 0
        ADC0SS0_Handler,                          //  ADC Sequence 0
        ADC0SS1_Handler,                          //  ADC Sequence 1
        ADC0SS2_Handler,                          //  ADC Sequence 2
        ADC0SS3_Handler,                          //  ADC Sequence 3
        WDT0_Handler,                             //  Watchdog timer
        TIMER0A_Handler,                          //  Timer 0 subtimer A
        TIMER0B_Handler,                          //  Timer 0 subtimer B
        TIMER1A_Handler,                          //  Timer 1 subtimer A
        TIMER1B_Handler,                          //  Timer 1 subtimer B
        TIMER2A_Handler,                          //  Timer 2 subtimer A
        TIMER2B_Handler,                          //  Timer 2 subtimer B
        COMP0_Handler,                            //  Analog Comparator 0
        COMP1_Handler,                            //  Analog Comparator 1
        COMP2_Handler,                            //  Analog Comparator 2
        SYSCTL_Handler,                           //  System Control (PLL, OSC, BO)
        FLASH_Handler,                            //  FLASH Control
        GPIOF_Handler,                            //  GPIO Port F
        GPIOG_Handler,                            //  GPIO Port G
        GPIOH_Handler,                            //  GPIO Port H
        UART2_Handler,                            //  UART2 Rx and Tx
        SSI1_Handler,                             //  SSI1 Rx and Tx
        TIMER3A_Handler,                          //  Timer 3 subtimer A
        TIMER3B_Handler,                          //  Timer 3 subtimer B
        I2C1_Handler,                             //  I2C1 Master and Slave
        QEI1_Handler,                             //  Quadrature Encoder 1
        CAN0_Handler,                             //  CAN0
        CAN1_Handler,                             //  CAN1
        CAN2_Handler,                             //  CAN2
        0,                                        //  Reserved
        HIB_Handler,                              //  Hibernate
        USB0_Handler,                             //  USB0
        PWM0_3_Handler,                           //  PWM Generator 3
        UDMA_Handler,                             //  uDMA Software Transfer
        UDMAERR_Handler,                          //  uDMA Error
        ADC1SS0_Handler,                          //  ADC1 Sequence 0
        ADC1SS1_Handler,                          //  ADC1 Sequence 1
        ADC1SS2_Handler,                          //  ADC1 Sequence 2
        ADC1SS3_Handler,                          //  ADC1 Sequence 3
        0,                                        //  Reserved
        0,                                        //  Reserved
        GPIOJ_Handler,                            //  GPIO Port J
        GPIOK_Handler,                            //  GPIO Port K
        GPIOL_Handler,                            //  GPIO Port L
        SSI2_Handler,                             //  SSI2 Rx and Tx
        SSI3_Handler,                             //  SSI3 Rx and Tx
        UART3_Handler,                            //  UART3 Rx and Tx
        UART4_Handler,                            //  UART4 Rx and Tx
        UART5_Handler,                            //  UART5 Rx and Tx
        UART6_Handler,                            //  UART6 Rx and Tx
        UART7_Handler,                            //  UART7 Rx and Tx
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        I2C2_Handler,                             //  I2C2 Master and Slave
        I2C3_Handler,                             //  I2C3 Master and Slave
        TIMER4A_Handler,                          //  Timer 4 subtimer A
        TIMER4B_Handler,                          //  Timer 4 subtimer B
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        0,                                        //  Reserved
        TIMER5A_Handler,                          //  Timer 5 subtimer A
        TIMER5B_Handler,                          //  Timer 5 subtimer B
        WTIMER0A_Handler,                         //  Wide Timer 0 subtimer A
        WTIMER0B_Handler,                         //  Wide Timer 0 subtimer B
        WTIMER1A_Handler,                         //  Wide Timer 1 subtimer A
        WTIMER1B_Handler,                         //  Wide Timer 1 subtimer B
        WTIMER2A_Handler,                         //  Wide Timer 2 subtimer A
        WTIMER2B_Handler,                         //  Wide Timer 2 subtimer B
        WTIMER3A_Handler,                         // Wide Timer 3 subtimer A
        WTIMER3B_Handler,                         // Wide Timer 3 subtimer B
        WTIMER4A_Handler,                         // Wide Timer 4 subtimer A
        WTIMER4B_Handler,                         // Wide Timer 4 subtimer B
        WTIMER5A_Handler,                         // Wide Timer 5 subtimer A
        WTIMER5B_Handler,                         // Wide Timer 5 subtimer B
        FPU_Handler,                              // FPU
        0,                                        // Reserved
        0,                                        // Reserved
        I2C4_Handler,                             // I2C4 Master and Slave
        I2C5_Handler,                             // I2C5 Master and Slave
        GPIOM_Handler,                            // GPIO Port M
        GPION_Handler,                            // GPIO Port N
        QEI2_Handler,                             // Quadrature Encoder 2
        0,                                        // Reserved
        0,                                        // Reserved
        GPIOP0_Handler,                           // GPIO Port P (Summary or P0)
        GPIOP1_Handler,                           // GPIO Port P1
        GPIOP2_Handler,                           // GPIO Port P2
        GPIOP3_Handler,                           // GPIO Port P3
        GPIOP4_Handler,                           // GPIO Port P4
        GPIOP5_Handler,                           // GPIO Port P5
        GPIOP6_Handler,                           // GPIO Port P6
        GPIOP7_Handler,                           // GPIO Port P7
        GPIOQ0_Handler,                           // GPIO Port Q (Summary or Q0)
        GPIOQ1_Handler,                           // GPIO Port Q1
        GPIOQ2_Handler,                           // GPIO Port Q2
        GPIOQ3_Handler,                           // GPIO Port Q3
        GPIOQ4_Handler,                           // GPIO Port Q4
        GPIOQ5_Handler,                           // GPIO Port Q5
        GPIOQ6_Handler,                           // GPIO Port Q6
        GPIOQ7_Handler,                           // GPIO Port Q7
        GPIOR_Handler,                            // GPIO Port R
        GPIOS_Handler,                            // GPIO Port S
        PMW1_0_Handler,                           // PWM 1 Generator 0
        PWM1_1_Handler,                           // PWM 1 Generator 1
        PWM1_2_Handler,                           // PWM 1 Generator 2
        PWM1_3_Handler,                           // PWM 1 Generator 3
        PWM1_FAULT_Handler,                       // PWM 1 Fault


    };

// ----------------------------------------------------------------------------

// Processor ends up here if an unexpected interrupt occurs or a specific
// handler is not present in the application code.

void __attribute__ ((section(".after_vectors")))
Default_Handler(void)
{
  while (1)
    {
    }
}

// ----------------------------------------------------------------------------
