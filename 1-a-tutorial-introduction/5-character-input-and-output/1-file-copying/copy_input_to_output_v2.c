#include <stdio.h>

/* copy input to output; 2st version */
int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}