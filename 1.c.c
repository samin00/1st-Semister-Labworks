//Write a program to find the all-possible of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x1,x2,d;
    //d=Determinant

    printf("Enter the value of a,b,c:\t");
    scanf("%f %f %f",&a,&b,&c);

    d= b*b-4*a*c;

    if(d>0){
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("x1=%f\nx2=%f\n",x1,x2);
    }

    else if(d==0){
        x1=x2=-b/(2*a);
        printf("x1=%f\nx2=%f\n",x1,x2);
    }

    else
        printf("Roots are not possible numbers");


        return 0;

}
