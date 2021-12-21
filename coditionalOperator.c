// Program to use conditional operator

#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b;
    printf("Enter the value of a & b\n");
    scanf("%d %d", &a, &b);
    (a > b) ? printf("A is greater !") : printf("B is greater !");
}