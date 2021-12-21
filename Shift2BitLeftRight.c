// Program to to shift  inputed data  by two bits to left

#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int x, y;
    printf("ENter the integer::\t");
    scanf("%d", &x);
    printf("Left shifted data is::\t%d", x<<3);
    return 0;
}
