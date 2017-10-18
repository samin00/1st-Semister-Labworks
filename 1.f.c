/*Write a program that takes an integer as input and display it in reverse order.*/
#include<stdio.h>
int main(){
    int input,reverse=0,temp;
    printf("Enter Input:\t");
    scanf("%d",&input);
    while(input){
     temp=input%10;
     input/=10;
     reverse=reverse*10+temp;
    }
    printf("reversed form: %d",reverse);
    return 0;
}
