/*Write a program to find the area of a circle. (Use  as a symbolic constant)*/
#include<stdio.h>
//Constant
#define pi 3.1416
int main(){
    float area , rad;
    printf("Please enter the radius of ther circle:\t");
    scanf("%f",&rad);
    area=pi*rad*rad;
    printf("Area is %f",area);
    return 0;
}

