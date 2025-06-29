/* Exercise 1-14. Write a program to print a histogram of the frequencies of different characters in its input. */

#include <stdio.h>
#define MAX_CHARACTER 1000

int main()
{
   int c;
   int char_frequencies[256] = {0};
   while((c = getchar()) != EOF) {
     char_frequencies[c]++; 
   }

   for (int i = 0; i < 256; i++) {
    if(char_frequencies[i] > 0) {
      if (i == ' ') {
        printf("' ': ");
      } else if(i == '\n') {
        printf("'\\n': ");
      } else if(i == '\t') {
        printf("'\\t': ");
      } else {
        printf("%c: ", i);
      }

      for (int j = 0; j < char_frequencies[i]; j++) {
        printf("* ");
      }

      printf("\n");
    }
  }  
}