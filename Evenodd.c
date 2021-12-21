// Program to Find the number is even or Odd

#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])
{
    int Num;
    printf("ENter the Number !");
    scanf("%d", &Num);

    if (Num % 2 == 0)
        printf("Even !");
    else
        printf("Odd !");
    return 0;
}
