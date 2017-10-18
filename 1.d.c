/*Write a program that takes a floating-point number as input and display the floating point
and integer part separately*/
#include<stdio.h>
int main(){
    float input,floatPoint;
    int integer;

    printf("Enter a floating number:\t");
    scanf("%f",&input);
    integer=input;
    floatPoint=input-integer;
    printf("Integer Parts: %d\nFloating point: %f",integer,floatPoint);

    return 0;
}



