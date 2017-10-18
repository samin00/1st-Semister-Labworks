/*Write a program in C to compote the sum of the digits of a given integer number. For
example, the input number 123 then output should be 6*/
#include<stdio.h>
int main(){
    int input,sum=0,temp;
    printf("Enter Input:\t");
    scanf("%d",&input);
    while(input){
     temp=input%10;
     input/=10;
     sum=sum+temp;
    }
    printf("Sum is: %d",sum);
    return 0;
}
