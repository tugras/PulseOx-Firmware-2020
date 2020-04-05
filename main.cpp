#include "mbed.h"  // Adding mbed library header so that we can access mbed library
#include "C12832.h"   // Adding C12832 library header so that we can access library for 128x32 LCD screen

DigitalOut AFE_PWD (PTE3);       // pin 4, active low
DigitalIn ADC_RDY (PTE20);       //pin 13
DigitalIn CLKOUT_AFE (PTE21);    //pin 14
DigitalOut DIAG_END_AFE (PTE22); //pin 15
DigitalOut AFE_RESET (PTE23);    //pin 16, active low

?? VDDA (VDDA)//pin 17...need to rename these pins..
?? VREFH (VREFH)//pin 18

(VSSA)//pin 19...do I even need to initialize these pins?  they're grounded --> look at doc.
(VREFL)//pin 20

?In SED_CLK (PTA0)//pin 26
?In JTAG_TDI (PTA1)//pin 27
?In JTAG_TDO (PTA2) //pin 28
?In SWD_DIO (PTA3)//pin 29

// these 5 below are all the pins from MCU --> LCD
?In CS1B_LCD (PTA5)//pin 31
?Out RST_LCD (PTA12)//pin 32
?In A0_LCD (PTA13)//pin 33
?Out SCL_LCD (PTA15)//pin 35
?Out SDA_LCD (PTA16)//pin 36

// is there no pin 38 or 39 on MCU?  can't find them

?In SYS_CLK (PTA18)//pin 40
?In RESET (PTA20)//pin 42

DigitalOut CE_Bat (PTB16)      //pin 51, active low
DigitalOut EN2_Bat (PTB17)     //pin 52
DigitalOut EN1_Bat (PTB18)     //pin 53
DigitalIn PGOOD_Bat (PTB19)    //pin 54, active low

DigitalIn CHG_Bat (PTC2)       //pin 57, active low

DigitalIn PD_ALM (PTC10)//pin 67
DigitalIn LED_ALM (PTC11)//pin 68

?Out STE (PTD0)//pin 73...SPI or SPISlave?
?Out SCLK (PTD1)//pin 74...SPI or SPISlave?
?In SOMI (PTD2)//pin 75...SPI or SPISlave?
?Out SIMO (PTD3)//pin 76...SPI or SPISlave?


C12832 lcd(PTA16, PTA15, PTA12, PTA13, PTA5)

int main() {
    while(){
        }
}
