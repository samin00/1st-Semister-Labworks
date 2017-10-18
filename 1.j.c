/*Write a program in C that prints the largest of the three number using nesting if-else
statements.*/
#include<stdio.h>
int main(){
    float a,b,c;
    printf("Enter Three Input:\t");
    scanf("%f %f %f",&a,&b,&c);
    if((a>b)&&(a>c))
        printf("Largest Number is %.3f",a);
    else if((b>a)&&(b>c))
        printf("Largest Number is %.3f",b);
    else
        printf("Largest Number is %.3f",c);

        return 0;

}
