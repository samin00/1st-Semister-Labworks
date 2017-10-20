/*Write a program using pointers to compute the sum of all elements stored in an array.*/

#include<stdio.h>
int main(){

    float array[10000],*p,sum=0;
    int n,i;

    printf("How many data do you want input:\t");
    scanf("%d",&n);

    p=array;

    printf("Enter Array inputs:\n");
    for(i=0;i<n;i++){
        scanf("%f",p+i);
        sum+=*(p+i);
    }

    printf("Sum: %.2f",sum);


    return 0;
}
