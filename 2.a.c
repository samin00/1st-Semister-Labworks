/*Write a program to calculate the standard deviation for n items*/

#include<stdio.h>
#include<math.h>

//declaration
float sd(float *element,int n);

int main(){
    int n,i;
    printf("How many inputs do u want to enter?\n");
    scanf("%d",&n);
    float a[n];
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
    }
    printf("Standard Deviation: %f",sd(a,n));

    return 0;
}
//definition
float sd(float *element,int n){

    float sd=0,sum=0,mean;
    int i;
    for(i=0;i<n;i++){
        sum+=element[i];
    }
    mean=sum/n;
    for(i=0;i<n;i++){
       //sd+= pow((element[i]-mean),2);
        sd+= (element[i]-mean)*(element[i]-mean);
    }
    sd=sqrt(sd/(n-1));

    return sd;
}
