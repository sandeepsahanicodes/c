/* Exercise 1-16. Revise the main routine of the longest-line program so it will correctly print the length of arbitrary
long input lines, and as much as possible of the text. */

#include <stdio.h>

#define MAXLINE 1000  // max buffer size for one read

int get_line(char line[], int maxline);

int main() {
    int len;                 // length of current line chunk
    int max = 0;             // max line length seen so far
    int total_len = 0;       // total length of current line
    char line[MAXLINE];      // current line chunk
    char longest[MAXLINE];   // stores as much of the longest line as possible

    while ((len = get_line(line, MAXLINE)) > 0) {
        total_len = len;

        // Keep reading if the line didn't end with '\n'
        while (line[len - 1] != '\n') {
            len = get_line(line, MAXLINE);
            total_len += len;

            // Break if no more input
            if (len == 0) break;
        }

        if (total_len > max) {
            max = total_len;
            // Copy the first MAXLINE-1 characters of the long line
            for (int i = 0; i < MAXLINE - 1 && line[i] != '\0'; ++i)
                longest[i] = line[i];
            longest[MAXLINE - 1] = '\0'; // null-terminate
        }
    }

    if (max > 0) {
        printf("Longest line length: %d\n", max);
        printf("Text (first %d chars):\n%s", MAXLINE - 1, longest);
    }

    return 0;
}

// Read a line into s, return length
int get_line(char s[], int lim) {
    int c, i;

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if (c == '\n') {
        s[i++] = c;
    }

    s[i] = '\0';
    return i;
}
