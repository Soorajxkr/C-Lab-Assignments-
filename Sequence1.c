// Program to  print stars Sequence 1

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
            printf("\n");
    }
    return 0;
}
