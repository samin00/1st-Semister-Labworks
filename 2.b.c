/*Write a program to initialize all the diagonal elements of a two-dimensional array to 1 and
others to 0*/
#include<stdio.h>
int main(){
    int a[100][100],n,i,j;
    printf("Enter the size of two dimensional array (row=coloum):\t");
    scanf("%d",&n);


    printf("\nUp to Bottom:\n");
    //set value
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==i)
                a[i][j]=1;
            else
                a[i][j]=0;
        }
    }
    //display
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }



    /**************************(Reverse version optional)***********************/
     printf("\n\nBottom to up:\n");
    //set value
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==(n-i-1))
                a[i][j]=1;
            else
                a[i][j]=0;
        }
    }
    //display
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d\t",a[i][j]);
        printf("\n");
    }

    printf("\n\n");


    return 0;
}
