// Program to find the gross salary .

#include <stdio.h>
#include <conio.h>

void main()
{
    int gs, bs, da, ta;
    printf("Enter the Basic salary value:");
    scanf("%d", &bs);
    da = (10 * bs) / 100;
    ta = (12 * bs) / 100;
    gs = bs + ta + da;

    printf("Gross Income :%d", gs);
}