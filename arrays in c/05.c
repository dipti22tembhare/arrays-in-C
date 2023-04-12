#include<stdio.h>
int main(){
    int marks[3];
    for(int i=0; marks[i]; i++){
        printf("Enter the value of student= %dn", i+1);
        scanf("%d", &marks[i]);


    }
    for(int i=0; marks[i]; i++){
        printf("The marks of student %d is= %d\n", marks[i], i+1);
    }
    return 0;
}