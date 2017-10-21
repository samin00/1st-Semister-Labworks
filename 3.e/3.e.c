/*Write a program that appends one file at the end of another. */
#include<stdio.h>

int main(){
    FILE *src, *master;
    int a;

    printf("Press any key to start appending.\n");
    getch();
    src= fopen("src.txt","r");
    master= fopen("master.txt","a");

    while((a=getc(src))!=EOF){
        putc(a,master);
    }

    printf("Successful!!!");

    fclose(src);
    fclose(master);
    return 0;
}
