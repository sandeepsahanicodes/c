/* Exercise 1-8. Write a program to count blanks, tabs, and newlines. */
#include <stdio.h>

int main() 
{
    int c, nb, nt, nl;

    nb = 0; // count of blanks
    nt = 0; // count of tabs
    nl = 0; // count of newlines

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++nb;
        } else if (c == '\t') {
            ++nt;
        } else if (c == '\n') {
            ++nl;
        }
    }

    printf("Blanks: %d\n", nb);
    printf("Tabs: %d\n", nt);
    printf("Newlines: %d\n", nl);

    return 0;
}