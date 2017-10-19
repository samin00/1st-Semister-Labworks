/*Write a program in C to concatenate the three arrays namely first-name, second-name, thirdname into one string to be called name.*/
#include<stdio.h>
#include<string.h>
int main(){
    char fn[32] ,sn[32], tn[32],n[94];
    printf("Enter your first name:\t");
    scanf("%31s",fn);
    printf("Enter your second name:\t");
    scanf("%31s",sn);
    printf("Enter your last name:\t");
    scanf("%31s",tn);
    strcpy(n,fn);
    strcat(n," ");
    strcat(n,sn);
    strcat(n," ");
    strcat(n,tn);
    printf("Concatenated String: %s",n);
}
