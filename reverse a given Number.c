// Program  to reverse a given Number

#include <stdio.h>
#include <conio.h>

void main()
{

    int n, a, r = 0;
    printf("Enter the Number to ger its reverse:");
    scanf("%d", &n);
    while (n >= 1)
    {
        a = n % 10;
        r = r * 10 + a;
        n = n / 10;
    }
    printf("Reversed Value is:%d", r);
}