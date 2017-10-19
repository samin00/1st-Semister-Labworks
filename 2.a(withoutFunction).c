/*Write a program to calculate the standard deviation for n items*/

#include<stdio.h>
#include<math.h>

int main(){
    int n,i;
    printf("How many inputs do u want to enter?\n");
    scanf("%d",&n);
    float a[n],sd=0,sum=0,mean;
    for(i=0;i<n;i++){
        scanf("%f",&a[i]);
        sum+=a[i];
    }
    mean=sum/n;
     for(i=0;i<n;i++){
       //sd+= pow((element[i]-mean),2);
        sd+= (a[i]-mean)*(a[i]-mean);
    }
     sd=sqrt(sd/(n-1));
    printf("Standard Deviation: %f",sd);

    return 0;
}


