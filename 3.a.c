/*Write a program using to pointers to read in an array of integers and print its elements in
reverse order.*/

#include<stdio.h>
int main(){

    int array[10000],*p,n,i;

    printf("How many data do you want input:\t");
    scanf("%d",&n);

    p=array;

    printf("Enter Array inputs:\n");
    for(i=0;i<n;i++){
        scanf("%d",p+i);
    }

    printf("Array In reverse order:\n\t");
    for(i=n-1;i>=0;i--){
        printf("%d ",*(p+i));
    }

    return 0;
}
