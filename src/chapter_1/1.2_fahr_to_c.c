#include <stdio.h>
/*
Print Fahrenheit-Celsius table.
For Fahr = 0, 20, ..., 300
*/

int main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = 5*(fahr-32)/9;
        printf("%3.2f \t%3.5f\n",fahr,celsius);
        fahr+=step;
    }
    
    return 0;
}
