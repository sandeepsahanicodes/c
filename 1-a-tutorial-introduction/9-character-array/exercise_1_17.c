/* Exercise 1-17. Write a program to print all input lines that are longer than 80 characters. */

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
#define LIMIT 80 /* character limit */

int get_line(char line[], int maxline);

/* print the longest input line */
int main()
{  
    int len;                /* current line length */
    char line[MAXLINE];     /* current input line */
    
    while ((len = get_line(line, MAXLINE)) > 0) {
        if (len > LIMIT) {
           printf("Line length: %d\n", len);
           printf("%s", line);
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