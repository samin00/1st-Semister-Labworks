/*Write a program to read data from keyboard, write it to a file called, INPUT, again read the
same data from the INPUT file and display it on the screen*/
#include<stdio.h>

int main(){
    FILE *x;
    char a;

    //Reads the data
    x=fopen("index.txt","w");
    printf("Write Some text:\n(Press: ctrl+z to stop inputing)\n\n");
        while((a=getchar())!=EOF){
            putc(a,x);
        }
    fclose(x);

    printf("\nEnter any key to read the file data that has been created\n\n");
    getch();

    //Reads the data
    x=fopen("index.txt","r");
    printf("The File Contains:\n\n");
        while((a=getc(x))!=EOF){
           printf("%c",a);
        }
    fclose(x);
    getch();

    return 0;
}
