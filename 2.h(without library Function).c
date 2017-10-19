
/* Write a program to copy one string into another and count the number of characters copied*/
#include<stdio.h>

int main(){

    char o[1000],d[1000];
    int i;
    printf("Enter a string:\t");
    gets(o);
    for(i=0;o[i]!='\0';i++){
        d[i]=o[i];
    }
    printf("Length of string: %d\n",i);
    printf("Coppied string: %s\n",d);
    return 0;


}
