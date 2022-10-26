/********************************************************************************
* main.c: Interruptbaserad styrning av en lysdiod ansluten till pin 8 / PORTB0
*         via nedtryckning av en tryckknapp ansluten till pin 13 / PORTB5.
*         PCI-avbrott PCINT5 är aktiverat på tryckknappens pin för att toggla
*         lysdioden mellan att vara tänd och släckt.
********************************************************************************/
#include "header.h"

/********************************************************************************
* main: Initierar mikrodatorn vid start. Programmet hålls sedan igång så länge
*       matningsspänning tillförs. Toggling av lysdioderna sker via interrupts,
*       därav avsaknad av kod i while-satsen.
********************************************************************************/
int main(void)
{
   setup();

   while (1)
   {
   }

   return 0;
}

