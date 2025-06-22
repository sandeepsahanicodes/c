/* Exercise 1-10. Write a program to copy its input to its output, replacing each tab by \t, each backspace by \b,
and each backslash by \\. This makes tabs and backspaces visible in an unambiguous way. */

#include <stdio.h>

int main() 
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            printf("\\t"); // Replace tab with \t
        } else if (c == '\b') {
            printf("\\b"); // Replace backspace with \b
        } else if (c == '\\') {
            printf("\\\\"); /* Replace backslash with \\ */ 
        } else {
            putchar(c); // Output the character as it is
        }
    }

    return 0;
}