#include "main.h"

/**
 * jack_bauer - fucntion to print every minute of the day
 */
void jack_bauer(void)
{
    int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++) 
        {
            int tens_hour = hour / 10;
            int ones_hour = hour % 10;
            int tens_minute = minute / 10;
            int ones_minute = minute % 10;

            _putchar(tens_hour + '0');
            _putchar(ones_hour + '0');
            _putchar(':');
            _putchar(tens_minute + '0');
            _putchar(ones_minute + '0');
            _putchar('\n');
        }
    }
}

