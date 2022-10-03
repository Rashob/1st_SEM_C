#include <stdio.h>

int main()

{

    float c, f;


    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);


    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("%.2f Fahrenheit = %.2f Celsius", f, c);

    return 0;
}