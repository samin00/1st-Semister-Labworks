/*Write a program to find the factorial of an integer.*/
#include<stdio.h>
int main(){
    int input,fact=1,i;
    printf("Enter an input:\t");
    scanf("%d",&input);
    for(i=input; i>0; i--){
        fact=fact*i;
    }
    printf("%d",fact);
    return 0;
}

