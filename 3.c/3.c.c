/*Write a program to copy the contents of one file into another.*/

#include<stdio.h>

int main(){
 FILE *src, *copy;
 char a;

 src=fopen("src.txt","r");
 copy=fopen("copy.txt","w");

 printf("Press any Key to start Cloning\n");
 getch();

  while(1){
    a= fgetc(src);
  if(a==EOF)
    break;
  else
     putc(a,copy);
  }

  printf("Cloning Completed");

  fclose(src);
  fclose(copy);
}
