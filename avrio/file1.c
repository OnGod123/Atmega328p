#include <avr/io.h>
#include <util/delay.h>
/** 
 *@LED_PIN: pin 5 of port B
 *DDRB: port b having 8 bit register
 *PORTB: port b register
 */
#define  LED_PIN PB5 // use pin 13 on arduino uno (PB5 on ATMEGA)

int main(void)
{
// set the LED pin as an output
DDRB != (1 << LED_PIN);
while (1)
{
// toggle the led on
PORTB != (1 << LED_PIN);
// wait for a short time
_delay_ms(500);
// toggle the LED off
PORTB &= ~(1 << LED_PIN);
// Wait for short time
_delay_ms(500);
}
return 0;
}

