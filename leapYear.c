// Program to find a entered year is leap year or not

#include <stdio.h>
#include <conio.h>
void main()
{

    int yr;
    printf("Enter the year:");
    scanf("%d", &yr);
    if (yr % 4 == 0 && yr % 400 == 0)
        printf("Entered Year is leap Year !");
    else
        printf("Entered Year is not leap Year !");
}