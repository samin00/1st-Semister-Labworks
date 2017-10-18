/*Write a program in C to determine and print the sum of the following harmonic series for a
given value of n : s = 1 + 1/2 + 1/3 ........ + 1/n.)*/

#include<stdio.h>
int main(){
    int n,i;
    float sum;
    printf("Enter input:\t");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        sum=sum+(1/(float)i);
        //Here "i" is casted to float other wise the result will be wrong
        //I can also declare all their data types float to make the answer correct but that is not correct way
    }

    printf("Sum= %f",sum);
    return 0;

}
