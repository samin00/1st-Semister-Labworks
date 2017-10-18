 //Write a program to convert any integer to its binary equivalent
#include<stdio.h>
int main(){
    int input,binary=0,temp,i=1;
    printf("Enter Input:\t");
    scanf("%d",&input);
    while(input){
     temp=input%2;
     input/=2;
     binary=binary+temp*i;
     i*=10;
    }
    printf("Binary form: %d",binary);
    return 0;
}
