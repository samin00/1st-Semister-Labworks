/*Given two one-dimensional arrays A and B which are sorted in ascending order. Write a
program to merge them into a single sorted array C that contains every items from arrays A
and B, in ascending order.*/

#include<stdio.h>

int main(){
    int a[500], b[500],c[1000],n1,n2,n3,i,j,temp;

    printf("How many number in array A?\n");
    scanf("%d",&n1);
    printf("Enter array A numbers:\t");
    for(i=0;i<n1;i++){
            scanf("%d",&a[i]);
    }

    printf("How many number in array B?\n");
    scanf("%d",&n2);
    printf("Enter array B numbers:\t");
    for(i=0;i<n2;i++){
            scanf("%d",&b[i]);
    }
    //merging
    for(i=0;i<n1;i++)
        c[i]=a[i];
    for(j=0;j<n2;i++,j++)
        c[i]=b[j];
    n3=i;

    printf("%d",n3);
    printf("The elements of C after merging:\n");
    for(i=0;i<n3;i++)
        printf("%d ",c[i]);


    for (i=0;i<n3-1;i++)
       for (j=0;j<n3-i-1;j++)
           if (c[j]>c[j+1]){
            temp=c[j];
            c[j]=c[j+1];
            c[j+1]=temp;
           }


    printf("\nThe elements of C after shorting:\n");
    for(i=0;i<n3;i++)
        printf("%d ",c[i]);


}

