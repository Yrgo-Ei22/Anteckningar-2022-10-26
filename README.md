# Anteckningar-2022-10-26
Implementering av PCI-avbrott på mikrodator ATmega328P samt repetition av reguljära externa avbrott.

Filen header.h innehåller diverse definitioner och inkluderingsdirektiv för ett inbyggt system innehållande en lysdiod
ansluten till pin 8 (PORTB0) samt en tryckknapp ansluten till pin 13 (PORTB5).

Filen main.c innehåller implementeringen av programmet, där det inbyggda systemet initieras vid start. Eftersom resterande program är
helt avbrottsdrivet så används en while-sats enbart för att hålla igång programmet så länge matningsspänning tillförs.

Filen setup.c innehåller initieringsrutiner för att konfigurera I/O-portar samt aktivera externa avbrott INT0 - INT1 på pin 2 - 3.

Filen led.c innehåller en togglingsfunktion för lysdioderna, som möjliggör toggling av specificerad lysdiod.

Filen interrupts.c innehåller en avbrottsrutin för avbrottsvektor PCINT0, som medför toggling av lysdioden.

Filen Ei22 External Interrupt exercise2.zip utgör en repetitionsuppgift för implementering av externt avbrott INT0 i C, där en lysdiod
togglas mellan att blinka i en slinga samt vara avstängd. Pekare används för att direkt avbryta eventuell blinkning ifall 
lysdioden inaktiveras.

Filen asm external interrupt demo.zip demonstrerar hur externa avbrott fungerar i assembler.
