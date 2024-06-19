#include <stdio.h>
// Symbolic Constants
#define UPPER 300
#define LOWER 0
#define STEP  20
int main()
{
    for(float fah = LOWER; fah <= UPPER; fah += STEP)
    {
        printf("%3.0f %6.1f\n", fah, ((5.0/9.0) * (fah - 32.0)));
    }
}