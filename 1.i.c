/*Given an integer number, write a program that displays the number as follows :
First Line : all digits
Second Line : all excepts first digits
Third Line : all excepts first two digits
...........
Last Line : the last digit.
For example, the number 5678 will be displayed as :
5 6 7 8
6 7 8
7 8
8*/

#include<stdio.h>
int main(){
    int n,i,j;
    printf("How Many Numbers Do u want to input?\t");
    scanf("%d",&n);
    int a[n];
    printf("Enter them:\t");
    for(i=0;i<n;i++){
         scanf("%d", &a[i]);
    }
    for(i=n;i>0;i--){
        for(j=n-i;j<n;j++){
            printf("%d\t",a[j]);
        }
        printf("\n");
    }
    return 0;
}
