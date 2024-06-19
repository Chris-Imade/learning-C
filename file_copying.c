#include <stdio.h>

int main()
{
    int c;
    while((c = getchar()) != EOF)
    {
        // putchar(c);
        printf("%d", EOF + '\n');
    }

    return 0;
}


// This program is computationally expensive