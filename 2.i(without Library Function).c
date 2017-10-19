/*Write a program in C to concatenate the three arrays namely first-name, second-name, thirdname into one string to be called name.*/
#include<stdio.h>
#include<string.h>
int main(){
    char fn[32] ,sn[32], tn[32],n[94];
    int i,j;

    printf("Enter your first name:\t");
    scanf("%31s",fn);
    printf("Enter your second name:\t");
    scanf("%31s",sn);
    printf("Enter your last name:\t");
    scanf("%31s",tn);

    //adding first name
    for(i=0;fn[i]!='\0';i++)
        n[i]=fn[i];
    n[i]=' '; //adding space
    i+=1;

    //adding second name
    for(j=0;sn[j]!='\0';i++,j++)
        n[i]=sn[j];
    n[i]=' '; //adding space
    i+=1;

    //adding third name
    for(j=0;tn[j]!='\0';i++,j++)
        n[i]=tn[j];
    n[i]='\0'; //Terminating string

    printf("Concatenated String: %s",n);
}
