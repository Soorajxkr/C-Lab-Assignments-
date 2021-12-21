// Program to find the greatest of 3 number.

#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;
    printf("Enter the  3 numbers :\n");
    scanf("%d %d %d", &a, &b, &c);
    if ((a > b) && (a > c))
    printf("A is greatest !");
    if ((b > a) && (b > c))
    printf("B is Greatest !");
    if ((c > a) && (c > b))
    printf("C is greatest !");
}