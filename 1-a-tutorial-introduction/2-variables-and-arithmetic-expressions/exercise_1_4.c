/* Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.*/

#include <stdio.h>

/* print Celsius-Fahrenheit table
for fahr = 0, 20, ..., 300; floating-point version */
int main() 
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;

    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);        
        printf("%6.1f\t\t%3.0f\n", celsius, fahr);  
        fahr = fahr + step;                 
    } 
}