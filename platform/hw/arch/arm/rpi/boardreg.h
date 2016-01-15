#define BCM2835_PERIPH_PHYS 0x20000000

#define UART0		BCM2836_PERIPH_PHYS + 0x20100 

#define UARTDR		0x0			/* data register */
#define UARTFR		0x18			/* flag register */

#define UARTFR_TXFE	0x7			/* fifo empty */


#define TMR1		BCM2835_PERIPH_BASE + 0xb000		/* timer base address */
#define TMR2		0x7e003000		/* timer base address */

#define TMR1_LOAD	TMR1 + 0x400		/* load value to decrement */
#define TMR1_VALUE	TMR1 + 0x404		/* current value */
#define TMR1_CTRL	TMR1 + 0x408		/* control register */
#define TMR1_CLRINT	TMR1 + 0x40c		/* clear interrupt by writing here */


#define TMR_CTRL_EN	0x80			/* timer enabled */
// #define TMR_CTRL_PER	 0x40	/* periodic (loop to value) - not supported */
#define TMR_CTRL_IE	0x20			/* interrupt enable */
#define TMR_CTRL_D256	0x08			/* divide clock by 256 */
#define TMR_CTRL_D16	0x04			/* divide clock by 16 */
#define TMR_CTRL_32	0x02			/* 16/32bit timer */


#define INTR_BASE	UART0	/* irq control base */

#define INTR_STATUS	INTR_BASE + 0x3c	/* current status */
#define INTR_ENABLE	INTR_BASE + 0x38	/* enable irqs */
#define INTR_CLEAR	INTR_BASE + 0x44	/* clear irqs */

#define CM_SDRAM	BCM2835_PERIPH_PHYS + 0xe000000	 /* sdram control register */
