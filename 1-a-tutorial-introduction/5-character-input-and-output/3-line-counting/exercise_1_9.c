/* Exercise 1-9. Write a program to copy its input to its output, replacing each string of one or more blanks by a
single blank. */

#include <stdio.h>

int main() 
{
    int c, last_char;

    last_char = ' '; // Initialize to a blank space to handle leading blanks

    while ((c = getchar()) != EOF) {
        if (c != ' ') {
            putchar(c); // Output the character if it's not a blank
            last_char = c; // Update last_char to the current character
        } else if (last_char != ' ') {
            putchar(' '); // Output a single blank if the last character was not a blank
            last_char = ' '; // Update last_char to a blank
        }
    }

    return 0;
}