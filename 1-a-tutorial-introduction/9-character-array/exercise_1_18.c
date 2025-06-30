/* Exercise 1-18. Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely
blank lines. */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void remove_trailing_blanks(char line[]);

/* print the longest input line */
int main()
{  
    char line[MAXLINE];     /* current input line */
    
    while ((get_line(line, MAXLINE)) > 0) {
        remove_trailing_blanks(line);
        
        // Don't print blank lines
        if (line[0] != '\0') {
            printf("%s\n", line);
        }
    }
}

/* getline: read a line into s, return length */
int get_line(char s[],int lim)
{
    int c, i;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* remove trailling spaces and blanks*/
void remove_trailing_blanks(char line[])
{
    int i = 0;
    
    // go till last character
    while (line[i] != '\0') {
        ++i;
    }

    // move back one character before '\0'
    --i;
    
    // check if last character is blank space, tab, new line.
    while (i >= 0 && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n')) {
        --i;
    }

    // if character exists, append null character at the end which removes the unwanted blank, tab or new line.
    if (i >= 0) {
        line[i + 1] = '\0';
    } else {
        line[0] = '\0';
    }
}