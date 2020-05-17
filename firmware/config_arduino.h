#define NOT_CONNECTED	   NA

#define DIGITAL_PIN_00	   0
#define DIGITAL_PIN_01	   1
#define DIGITAL_PIN_02	   2
#define DIGITAL_PIN_03	   3
#define DIGITAL_PIN_04	   4
#define DIGITAL_PIN_05	   5
#define DIGITAL_PIN_06	   6
#define DIGITAL_PIN_07	   7
#define DIGITAL_PIN_08	   0
#define DIGITAL_PIN_09	   1
#define DIGITAL_PIN_10	   2
#define DIGITAL_PIN_11	   3
#define DIGITAL_PIN_12	   4

#define ANALOG_PIN_00	   0
#define ANALOG_PIN_01	   1
#define ANALOG_PIN_02	   2

#define MODEPIN_SNES       ANALOG_PIN_00
#define MODEPIN_N64        ANALOG_PIN_01
#define MODEPIN_GC         ANALOG_PIN_02

#define N64_PIN	           DIGITAL_PIN_02

#define SNES_LATCH         DIGITAL_PIN_03
#define SNES_DATA          DIGITAL_PIN_04
#define SNES_CLOCK         DIGITAL_PIN_06

#define NES_LATCH          DIGITAL_PIN_03
#define NES_CLOCK          DIGITAL_PIN_06
#define NES_DATA           DIGITAL_PIN_04
#define NES_DATA0          DIGITAL_PIN_02
#define NES_DATA1          DIGITAL_PIN_05

#define GC_PIN             DIGITAL_PIN_05

#define ThreeDO_LATCH      DIGITAL_PIN_02
#define ThreeDO_DATA       DIGITAL_PIN_04
#define ThreeDO_CLOCK      DIGITAL_PIN_03

#define PCFX_LATCH         DIGITAL_PIN_03
#define PCFX_CLOCK         DIGITAL_PIN_04
#define PCFX_DATA          DIGITAL_PIN_05

#define SS_SELECT0         DIGITAL_PIN_06
#define SS_SEL             DIGITAL_PIN_06
#define SS_SELECT1         DIGITAL_PIN_07
#define SS_REQ             DIGITAL_PIN_07
#define SS_ACK             DIGITAL_PIN_08
#define SS_DATA0           DIGITAL_PIN_02
#define SS_DATA1           DIGITAL_PIN_03
#define SS_DATA2           DIGITAL_PIN_04
#define SS_DATA3           DIGITAL_PIN_05

#define TG_SELECT          DIGITAL_PIN_06
#define TG_DATA1           DIGITAL_PIN_02
#define TG_DATA2           DIGITAL_PIN_03
#define TG_DATA3           DIGITAL_PIN_04
#define TG_DATA4           DIGITAL_PIN_05

#define PS_ATT             DIGITAL_PIN_02
#define PS_CLOCK           DIGITAL_PIN_03
#define PS_ACK             DIGITAL_PIN_04
#define PS_CMD             DIGITAL_PIN_05
#define PS_DATA            DIGITAL_PIN_06

//PORTD
#define NEOGEO_SELECT      DIGITAL_PIN_02
#define NEOGEO_D           DIGITAL_PIN_03
#define NEOGEO_B           DIGITAL_PIN_04
#define NEOGEO_RIGHT       DIGITAL_PIN_05
#define NEOGEO_DOWN        DIGITAL_PIN_06
#define NEOGEO_START       DIGITAL_PIN_07
//PORTB
#define NEOGEO_C           DIGITAL_PIN_08
#define NEOGEO_A           DIGITAL_PIN_09
#define NEOGEO_LEFT        DIGITAL_PIN_10
#define NEOGEO_UP          DIGITAL_PIN_11

#define INTPIN1            DIGITAL_PIN_02
#define INTPIN2            DIGITAL_PIN_03
#define INTPIN3            DIGITAL_PIN_04
#define INTPIN4            DIGITAL_PIN_05
#define INTPIN5			       NOT_CONNECTED
#define INTPIN6            DIGITAL_PIN_07
#define INTPIN7            DIGITAL_PIN_10
#define INTPIN8            DIGITAL_PIN_11
#define INTPIN9            DIGITAL_PIN_08

#define AJ_COLUMN1         DIGITAL_PIN_08
#define AJ_COLUMN2         DIGITAL_PIN_09
#define AJ_COLUMN3		   DIGITAL_PIN_10
#define AJ_COLUMN4         DIGITAL_PIN_11

#define PIND_READ( pin ) (PIND&(1<<(pin)))
#define PINB_READ( pin ) (PINB&(1<<(pin)))
#define PINC_READ( pin ) (PINC&(1<<(pin)))

#define READ_PORTD( mask ) (PIND & mask)
#define READ_PORTB( mask ) (PIND & mask)

#define MICROSECOND_NOPS "nop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\nnop\n"

#define T_DELAY
#define A_DELAY( ms ) delay(ms)

#define FASTRUN