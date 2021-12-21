// program to find the simple interest.

#include <stdio.h>
#include <conio.h>

void main()
{
    int t, p, r;
    float si;
    printf("Enter the Principle value:");
    scanf("%d", &p);
    printf("Enter the Time value:");
    scanf("%d", &t);
    printf("Enter the Rate value:");
    scanf("%d", &r);
    si = (p*r*t) / 100;
    printf("Simple Intreset :%f", si);
}