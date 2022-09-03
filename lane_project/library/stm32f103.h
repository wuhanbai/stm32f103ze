#ifndef _STM32F103_H_
#define _STM32F103_H_

#define __IO                        volatile
typedef unsigned int                u32;
typedef unsigned char               u8;

typedef struct rcc_reg
{
    __IO u32 CR;
    __IO u32 CFGR;
    __IO u32 CIR;
    __IO u32 APB2RSTR;
    __IO u32 APB1RSTR;
    __IO u32 AHBENR;
    __IO u32 APB2ENR;
    __IO u32 APB1ENR;
    __IO u32 BDCR;
    __IO u32 CSR;
}rcc_typedef;


typedef struct gpio_reg
{
    __IO u32 CRL;
    __IO u32 CRH;
    __IO u32 IDR;
    __IO u32 ODR;
    __IO u32 BSRR;
    __IO u32 BRR;
    __IO u32 LCKR;
}gpio_typedef;

/* Peripheral base address */
#define PERIPHERAL_BASE             ((u32)0x40000000)
/* Advanced peripheral 1 Bus */
#define APB1_BASE                   PERIPHERAL_BASE
/* Advanced peripheral 2 Bus */
#define APB2_BASE                   (PERIPHERAL_BASE + 0x00010000)
/*  Advanced high performance Bus */
#define AHB_BASE                    (PERIPHERAL_BASE + 0x00020000)
/* RCC register Base address*/
#define RCC                    ((rcc_typedef *)(AHB_BASE + 0x1000))
/* gpio register Base address */
#define GPIOA                  ((gpio_typedef *)(APB2_BASE + 0x0800))
#define GPIOB                  ((gpio_typedef *)(APB2_BASE + 0x0C00))
#define GPIOC_BASE                  ((gpio_typedef *)APB2_BASE + 0x1000)
#define GPIOD_BASE                  ((gpio_typedef *)APB2_BASE + 0x1400)
#define GPIOE_BASE                  ((gpio_typedef *)APB2_BASE + 0x1800)
#define GPIOF_BASE                  ((gpio_typedef *)APB2_BASE + 0x1C00)
#define GPIOG_BASE                  ((gpio_typedef *)APB2_BASE + 0x2000)





#endif
