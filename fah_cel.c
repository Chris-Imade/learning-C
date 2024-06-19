#include <stdio.h>

int main()
{
    float fahrenheit, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahrenheit = lower;

    // Using a while loop

    // while (fahrenheit <= upper)
    // {
    //     celsius = (5.0/9.0) * (fahrenheit - 32.0);
    //     printf("%3.0f %6.1f\n", fahrenheit, celsius);
    //     fahrenheit += step;
    // }
    

    // Using a for loop

    // for(float fah = 0; fah <= 300; fah += 20)
    //     printf("%3.0f %6.1f\n", fah, ((5.0/9.0) * (fah - 32.0)));


    // Modified for reversal
    for(float fah = 300; fah >= 0; fah -= 20)
    {
        printf("%3.0f %6.1f\n", fah, ((5.0/9.0) * (fah - 32.0)));
    }

    return 0;
}