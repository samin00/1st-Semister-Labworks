//Write a program using an array of structure to read the number of three subjects for n
//students and sort them according to their position. (1st, 2nd, 3rd ......)
#include<stdio.h>

struct student{
    char name[94];
    int roll;
    float marks[3],tm;
};

int main(){
    int n,i,j;
    struct student s[1000], temp;


    printf("Of How many students do you want yo input data?\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        s[i].tm=0;
        printf("\nStudent %d:\n",i+1);
        printf("Name:\t");
        scanf("%s",&s[i].name);
        printf("Roll:\t");
        scanf("%d",&s[i].roll);
        for(j=0;j<3;j++){
            printf("Subject %d:",j+1);
            scanf("%f",&s[i].marks[j]);
            s[i].tm += s[i].marks[j];

        }

    }
    //sorting
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++)
            if(s[j].tm<s[j+1].tm){
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
    }
    //Output
    for(i=0;i<n;i++){
        printf("\n\nMerit %d:\n",i+1);
        printf("Name:\t%s\n",s[i].name);
        printf("Roll:\t%d\n",s[i].roll);
        for(j=0;j<3;j++){
            printf("Subject %d mark: %0.3f\n",j+1,s[i].marks[j]);
        }
         printf("Total Mark:\t%0.3f\n\n",s[i].tm);
    }


    return 0;
}


