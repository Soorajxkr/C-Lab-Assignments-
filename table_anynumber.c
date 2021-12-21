// print a table of any number

#include <stdio.h>
#include <conio.h>

void main()
{
    int n;

    printf("Enter the number whose table You need");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d", n, i, (i * n));
        printf("\n");
    }
}