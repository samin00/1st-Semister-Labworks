/*Write a program to evaluate the expression using user defined function :
f(x) = x-x3/3! + x5/5!-x7/7!+.....*/
#include<stdio.h>
#include<math.h>

float myfunc(int , float);
int fact(int);
int main(){
    int n;
    float x;
    printf("Enter x:\t");
    scanf("%f",&x);
    printf("Enter n:\t");
    scanf("%d",&n);
    printf("The Sum is %f",myfunc(n,x));
    return 0;
}
float myfunc(int a, float b){
    int i;
    float sum=0;
    for(i=1;i<=a;i+=2){
        sum+= pow(b,i)/fact(i);
        b*=-1;
    }
    return sum;
}
int fact(int f)
{
    if (f >= 1)
        return f*fact(f-1);
    else
        return 1;
}
