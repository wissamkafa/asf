/*
*******************************************************************************
*                     (c) Cybercom Sweden West AB 2009                        *
*******************************************************************************

   File name:     uart_config.c
   Author:        Thomas Bredhammar, Daniel Persson
   Description:   Contains the USART configuration interface.
   Compiler:      IAR EWAVR32 for AVR32

   Note:
                  This configuration file can be extended by the user with
                  settings for more boards, more USART ports and more
                  baudrates.
*******************************************************************************
*/
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

#include  "board.h"
#include  "gpio.h"
#include  "usart.h"

/*
Change T2BF_SELECTED_USART to select USART (only implemented for EVK1100 and
port 0 and 2).
*/
#define T2BF_SELECTED_USART 0

/*
Change T2BF_HCI_BAUD_SETTING to select USART baudrate. If the baudrate will work
out depends on the Bit Error Rate (BER) due to selected baudrate and processor
clock.
*/
#define T2BF_HCI_BAUD_SETTING 115200
                              //57600
                              //115200
                              //230400


/*
The defines below may be changed or extended by the user.
*/
#if BOARD == EVK1100

#if T2BF_SELECTED_USART == 0

#if (__GNUC__   && __AVR32_UC3A0512__) || \
    (__ICCAVR32__ && __AT32UC3A0512__)
#define T2BF_USART_SETTING               (&AVR32_USART0)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART0_RXD_0_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART0_RXD_0_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART0_TXD_0_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART0_TXD_0_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART0_IRQ
#define T2BF_USART_PORT_SETTING          0

#elif (__GNUC__   && __AVR32_UC3A0512ES__) || \
      (__ICCAVR32__ && __AT32UC3A0512ES__)
#define T2BF_USART_SETTING               (&AVR32_USART0)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART0_RXD_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART0_RXD_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART0_TXD_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART0_TXD_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART0_IRQ
#define T2BF_USART_PORT_SETTING          0
#endif

#elif T2BF_SELECTED_USART == 1

#if (__GNUC__   && __AVR32_UC3A0512__) || \
    (__ICCAVR32__ && __AT32UC3A0512__)
#define T2BF_USART_SETTING               (&AVR32_USART1)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART1_RXD_0_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART1_RXD_0_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART1_TXD_0_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART1_TXD_0_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART1_IRQ
#define T2BF_USART_PORT_SETTING          1

#elif (__GNUC__   && __AVR32_UC3A0512ES__) || \
      (__ICCAVR32__ && __AT32UC3A0512ES__)
#define T2BF_USART_SETTING               (&AVR32_USART1)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART1_RXD_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART1_RXD_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART1_TXD_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART1_TXD_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART1_IRQ
#define T2BF_USART_PORT_SETTING          1
#endif

#elif T2BF_SELECTED_USART == 2

#if (__GNUC__   && __AVR32_UC3A0512__) || \
    (__ICCAVR32__ && __AT32UC3A0512__)
#define T2BF_USART_SETTING               (&AVR32_USART0)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART0_RXD_0_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART0_RXD_0_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART0_TXD_0_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART0_TXD_0_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART0_IRQ
#define T2BF_USART_PORT_SETTING          0

#elif (__GNUC__   && __AVR32_UC3A0512ES__) || \
      (__ICCAVR32__ && __AT32UC3A0512ES__)
#define T2BF_USART_SETTING               (&AVR32_USART2)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART2_RXD_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART2_RXD_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART2_TXD_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART2_TXD_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART2_IRQ
#define T2BF_USART_PORT_SETTING          2
#endif

#elif T2BF_SELECTED_USART == 3

#if (__GNUC__   && __AVR32_UC3A0512__) || \
    (__ICCAVR32__ && __AT32UC3A0512__)
#define T2BF_USART_SETTING               (&AVR32_USART3)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART3_RXD_0_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART3_RXD_0_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART3_TXD_0_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART3_TXD_0_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART3_IRQ
#define T2BF_USART_PORT_SETTING          3

#elif (__GNUC__   && __AVR32_UC3A0512ES__) || \
      (__ICCAVR32__ && __AT32UC3A0512ES__)
#define T2BF_USART_SETTING               (&AVR32_USART3)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART3_RXD_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART3_RXD_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART3_TXD_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART3_TXD_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART3_IRQ
#define T2BF_USART_PORT_SETTING          3
#endif

#endif

#elif BOARD == EVK1105

#define T2BF_USART_SETTING               (&AVR32_USART0)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART0_RXD_0_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART0_RXD_0_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART0_TXD_0_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART0_TXD_0_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART0_IRQ
#define T2BF_USART_PORT_SETTING          0

#elif BOARD == EVK1104

#define T2BF_USART_SETTING               (&AVR32_USART1)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART1_RXD_0_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART1_RXD_0_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART1_TXD_0_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART1_TXD_0_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART1_IRQ
#define T2BF_USART_PORT_SETTING          1

#elif BOARD == UC3C_EK

#define T2BF_USART_SETTING               (&AVR32_USART1)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART1_RXD_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART1_RXD_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART1_TXD_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART1_TXD_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART1_IRQ
#define T2BF_USART_PORT_SETTING          1

#elif BOARD == EVK1101
#define T2BF_USART_SETTING               (&AVR32_USART1)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART1_RXD_0_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART1_RXD_0_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART1_TXD_0_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART1_TXD_0_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART1_IRQ
#define T2BF_USART_PORT_SETTING          1

#elif BOARD == STK1000
#define T2BF_USART_SETTING               (&AVR32_USART1)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART1_RXD_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART1_RXD_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART1_TXD_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART1_TXD_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART1_IRQ
#define T2BF_USART_PORT_SETTING          1

#elif BOARD == NGW100
#define T2BF_USART_SETTING               (&AVR32_USART1)
#define T2BF_USART_RX_PIN_SETTING        AVR32_USART1_RXD_0_PIN
#define T2BF_USART_RX_FUNCTION_SETTING   AVR32_USART1_RXD_0_FUNCTION
#define T2BF_USART_TX_PIN_SETTING        AVR32_USART1_TXD_0_PIN
#define T2BF_USART_TX_FUNCTION_SETTING   AVR32_USART1_TXD_0_FUNCTION
#define T2BF_USART_IRQ_SETTING           AVR32_USART1_IRQ
#define T2BF_USART_PORT_SETTING          1

#else
#error Board is not supported.
#endif





/* DO NOT EDIT LINES BELOW UNLESS YOU KNOW WHAT YOU ARE DOING */

volatile avr32_usart_t *T2BF_USART = T2BF_USART_SETTING;
const unsigned char T2BF_USART_RX_PIN = T2BF_USART_RX_PIN_SETTING;
const unsigned char T2BF_USART_RX_FUNCTION = T2BF_USART_RX_FUNCTION_SETTING;
const unsigned char T2BF_USART_TX_PIN = T2BF_USART_TX_PIN_SETTING;
const unsigned char T2BF_USART_TX_FUNCTION = T2BF_USART_TX_FUNCTION_SETTING;
const unsigned int T2BF_USART_IRQ = T2BF_USART_IRQ_SETTING;
const unsigned long T2BF_USART_BAUDRATE = T2BF_HCI_BAUD_SETTING;
const unsigned char T2BF_USART_PORT = T2BF_USART_PORT_SETTING;

/* USART pins. */
const gpio_map_t USART_GPIO_MAP =
  {
    {T2BF_USART_RX_PIN_SETTING, T2BF_USART_RX_FUNCTION_SETTING},
    {T2BF_USART_TX_PIN_SETTING, T2BF_USART_TX_FUNCTION_SETTING}
  };

/* USART options. */
const usart_options_t USART_OPTIONS =
  {
    .baudrate     = T2BF_HCI_BAUD_SETTING,
    .charlength   = 8,
    .paritytype   = USART_NO_PARITY,
    .stopbits     = USART_1_STOPBIT,
    .channelmode  = USART_NORMAL_CHMODE
  };
