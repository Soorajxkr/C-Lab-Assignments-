// Program to  print stars Sequence 2

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int i, j;
    for (i = 1; i <=7; i++)
    {
        for (j = 7;j>=i;j--)
            printf(" ");
            for (int k = 1;k<=i; k++)
                printf("*");
            printf("\n");
    }
    return 0;
}
