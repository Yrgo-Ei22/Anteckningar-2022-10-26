/********************************************************************************
* main.c: Interruptbaserad styrning av en lysdiod ansluten till pin 8 / PORTB0
*         via nedtryckning av en tryckknapp ansluten till pin 13 / PORTB5.
*         PCI-avbrott PCINT5 �r aktiverat p� tryckknappens pin f�r att toggla
*         lysdioden mellan att vara t�nd och sl�ckt.
********************************************************************************/
#include "header.h"

/********************************************************************************
* main: Initierar mikrodatorn vid start. Programmet h�lls sedan ig�ng s� l�nge
*       matningssp�nning tillf�rs. Toggling av lysdioderna sker via interrupts,
*       d�rav avsaknad av kod i while-satsen.
********************************************************************************/
int main(void)
{
   setup();

   while (1)
   {
   }

   return 0;
}

