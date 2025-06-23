/* Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is easy to draw the
histogram with the bars horizontal; a vertical orientation is more challenging. */

// Test sentence: sandeep is a good boy, and he loves to play piano.

// Output:
/*

**** Corresponding Horizontal Histogram ****

  *  
  *                   *
  *             *     *
  *     * *     *   * *
  *     * * *   *   * *
  * *   * * * * * * * *
  * * * * * * * * * * *

*/

/* If you don't see any output after pressing enter, this is because the while loop will run untill End of file and to stimilate EOF press ctrl+D */

#include <stdio.h>

int main()
{
    const int MAX_WORDS = 100;
    int c, index = 0;
    int word_count[MAX_WORDS] = {0};

    while((c = getchar()) != EOF) {
        if(c)
        if(c == ' ' || c == '\t' || c == '\n') {
            index++;
            if (index >= MAX_WORDS) {
                printf("\nMax word limit reached!!\n");
                break;
            }
            
        } else {
            word_count[index]++;
        } 
    }
    printf("\n\n**** Corresponding Vertical Histogram ****\n\n");
    // Histogram printing logic. Will implement tommorow.
}

