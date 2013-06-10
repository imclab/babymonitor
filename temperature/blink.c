/*
 *  * blink.c:
 *   *      blinks the first LED
 *    *      Gordon Henderson, projects@drogon.net
 *     */

#include <stdio.h>
#include <wiringPi.h>

int main (void)
{
    printf ("Raspberry Pi blink\n") ;

    if (wiringPiSetup () == -1)
        return 1;

    pinMode (8, OUTPUT) ;         // aka BCM_GPIO pin 17

    for (;;) {
        digitalWrite (8, 1) ;       // On
        delay (500) ;               // mS
        digitalWrite (8, 0) ;       // Off
        delay (500) ;
    }

    return 0;
}
