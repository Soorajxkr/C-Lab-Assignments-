//Program to calculate sum of 5 subjcts total marks and find the percentage.

#include<stdio.h>
#include<conio.h>

void main(){

    int s1, s2, s3, s4, s5, sum, total = 500;
    float perCentage;
    printf("Enter the marks of 5 subject\n");
    scanf("%d", &s1);
    scanf("%d", &s2);
    scanf("%d", &s3);
    scanf("%d", &s4);
    scanf("%d", &s5);
    // or we can do it in Single line like
    //  scanf("%d\t%d\t%d\t%d\t%d",&s1,&s2,&s3,&s4,&s5);

    sum = s1+s2+s3+s4+s5;

    printf("\nTotal marks obtained is :%d", sum);

    perCentage = (sum *100)/total;

    printf("\nPercentage Obtained id :%f", perCentage);

}