#include <stdio.h>

//Print Celsius-Fahrenheit table for celsius = 0, 5, ..., 100; floating-point version

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;    //lower limit of temperature table
    upper = 100;  //upper limit
    step = 5;     //step size

    celsius = lower;
    printf("Celsius    Fahrenheit\n");
    while (celsius <= upper) {
        fahr = (9.0 / 5.0) * celsius + 32.0;
        printf("%-10.0f %-15.1f\n", celsius, fahr);
        celsius = celsius + step;
    }
}