/*Write a program to open a file named INVENTORY and store in it the following data :
Item Name Number Price Quantity
AAA-1      123 15.55 150
BBB-2      125 36.12 175
CCC-3      527 32.15 115
Extend the program to read this data from the file INVENTORY and display the inventory table with the value of each item.*/


/*All Data are initialized*/
/*using CSV file */

#include<stdio.h>
#include<stdlib.h>

struct item{
    char name[32];
    int number;
    float price;
    int qt;
};

int main(){
    struct item a[3]={{"AAA-1",123,15.55,150}, {"BBB-2" ,125 ,36.12,175},{"CCC-3" ,572 , 32.15 ,115}};
    FILE *data;
    int i;

    printf("Press any key to continue\n");
    getch();
    data = fopen("data.csv","w");

    fprintf(data,"Name,Number,Price,qt\n");

    for(i=0;i<3;i++){
        fprintf(data,"%s,%5d,%3.2f,%5d\n",a[i].name,a[i].number,a[i].price,a[i].qt);
    }

    fclose(data);
    system("data.csv");
}


