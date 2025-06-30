/* Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to write a program that
reverses its input a line at a time. */

#include <stdio.h>

#define MAXLINE 1000 /* maximum input line length */

int get_line(char line[], int maxline);
void reverse(char s[]);

int main()
{
    char line[MAXLINE];     /* current input line */
    
    while ((get_line(line, MAXLINE)) > 0) {
        reverse(line);
        printf("%s\n", line);
    }
    return 0;
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

/* reverse given string s*/
void reverse(char s[])
{
    int s_len = 0, j = 0;

    while ( s[s_len] != '\0') {
        ++s_len;
    }
    
    for (int i = s_len - 1; i >= 0; i--) {
        if (i >= j) {
            char temp = s[j];
            s[j] = s[i];
            s[i] = temp;
            j++;
        }
    }
}
