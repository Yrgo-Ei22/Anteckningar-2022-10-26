/********************************************************************************
* led.c: Inneh�ller funktionsdefinitioner f�r styrning av lysdioder.
********************************************************************************/
#include "header.h"

/********************************************************************************
* led_toggle: Togglar tillst�ndet f�r angiven lysdiod p� I/O-port B mellan att
*             vara t�nd och sl�ckt. Statiska variabler anv�nds f�r att h�lla
*             reda p� lysdiodernas tillst�nd och togglas vid anrop f�r att
*             �ndra tillst�nd. F�r tillf�llet har implementering bara genomf�rts
*             f�r lysdiod 1 ansluten till pin 8 / PORTB0.
*
*             - pin: Lysdiodens pin-nummer p� I/O-port B.
********************************************************************************/
void led_toggle(const uint8_t pin)
{
   static bool led1_enabled = false;

   if (pin == LED1)
   {
      led1_enabled = !led1_enabled;

      if (led1_enabled) LED1_ON;
      else LED1_OFF;
   }

   return;
}