/* Exercise 1.15. Rewrite the temperature conversion program of Section 1.2 to use a function for conversion. */

#include <stdio.h>

/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */

float fahrenheit_to_celsius(float);
int main() 
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;      /* lower limit of temperature scale */
    upper = 300;    /* upper limit */
    step = 20;      /* step size */

    fahr = lower;

    while(fahr <= upper) {
        celsius = fahrenheit_to_celsius(fahr);  
        printf("%3.0f\t%6.1f\n", fahr, celsius);  
        fahr = fahr + step;                 
    } 
}

float fahrenheit_to_celsius(float fahrenheit)
{
    float celsius;
    celsius = (5.0/9.0) * (fahrenheit-32.0);
    return celsius;
}