#include<stdio.h>
int main(){
   
    int marks[5];
    for (int i = 0; marks[i]; i++)
    {
        printf("Enter The Value of student %d\n", i+1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; marks[i]; i++)
    {
        printf(" The Value of student %d is = %d\n", i+1, marks[i]);
    }
    


    return 0;
    
    }