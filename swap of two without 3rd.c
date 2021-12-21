// Program to show swap of two no's without using third variable.

#include <stdio.h>
#include <conio.h>
void main()
{

    int a, b;
    printf("Enter the two Numbers :\n");
    scanf("%d\t%d", &a, &b);
    printf("\nValues before Swapping  a == %d,b == %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("values of a and b afert swapping :\n");
    printf("\nvalues of a == %d and b ==%d :");
}