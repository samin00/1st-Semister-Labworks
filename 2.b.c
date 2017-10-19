 /*Write a program to find the first n Fibonacci numbers.*/
 #include<stdio.h>
 int main(){
    int x1=0,x2=1,temp=0,i,n;
    printf("Enter n:\t");
    scanf("%d",&n);
    printf("The Series is:\n");
    while(temp<=n)
    {
        printf("%d\t",temp);
        x1= x2;
        x2 = temp;
        temp= x1+x2;
    }

 return 0;
 }
