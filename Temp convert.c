// Program to convert temperature centigrade  into Fahrenheit.

#include <stdio.h>
#include <conio.h>
void main()
{
    float c, f;
    printf("Enter theTemparature in *c ");
    scanf("%f", &c);
    f = (1.8 * c) + 32;
    printf("Temprature in FahrenHeit:%f", f);
}