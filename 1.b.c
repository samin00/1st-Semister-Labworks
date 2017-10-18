//Write a program to convert the given temperature in Fahrenheit to Celsius and vice versa
#include<stdio.h>

int main(){
    int run;
    float cel, fer;
    x:
    printf("Press 1: Convert Celsius to Fahrenheit\nPress 2: Convert Fahrenheit to Celsius\n");
    scanf("%d",&run);
    switch(run){
        case 1: printf("Enter Value(Celsius):\t");
                scanf("%f",&cel);
                fer=cel*9/5+32;
                printf("In Fahrenheit: %f",fer);
                break;
        case 2: printf("Enter Value(Fahrenheit):\t");
                scanf("%f",&fer);
                cel=(fer-32)*5/9;
                printf("In Celsius: %f",cel);
                break;
        default:printf("Wrong Input\n");
                goto x;
    }

}
