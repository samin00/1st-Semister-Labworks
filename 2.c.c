/*Write a program that reads a string from keyboard and determines whether it is a palindrome
or not.*/

#include<stdio.h>
#include<string.h>

int main(){
    char str[1000],n,i,j;
    int isItPalindrome=0;
    printf("Enter The string:\n\t");
    gets(str);

    n=strlen(str);

    for(i=0,j=n-1;i<n;i++,j--)
        if(str[i]!=str[j])
            isItPalindrome+=1;


    if(isItPalindrome==0)
        printf("The string is palindrome");
    else
        printf("The string is not palindrome");

}
