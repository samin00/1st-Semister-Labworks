/* Write a program to copy one string into another and count the number of characters copied*/
#include<stdio.h>
#include<string.h>
int main(){

    char o[1000],d[1000];
    int len;
    printf("Enter a string:\t");
    gets(o);
    strcpy(d,o);
    len=strlen(d);
    printf("Length of string: %d\n",len);
    printf("Coppied string: %s\n",d);
    return 0;

}
