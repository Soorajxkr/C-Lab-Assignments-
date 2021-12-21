// Program to find the area and circumfernce of circle
#include <stdio.h>
#include <conio.h>

void main(){
    int r;
    float pi = 3.14, area, ci;
    printf("Enter the radius of circle:");
    scanf("%d", &r);
    area = pi*r*r;
    ci = 2*pi*r;
    printf("\nArea :%f",area); 
    printf("\nCircumfernce:%f",ci); 
}