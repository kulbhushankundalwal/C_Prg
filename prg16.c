#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int love = rand()%100 + 1;
    char n1[30];
    char n2[30];
    int i;

    printf("\nWelcome to Love Calculator\n    Made by Kulbhushan\n\n");
    do{
        printf("Enter Your Name: ");
        gets(n1);
        printf("Enter Your Crush Name: ");
        gets(n2);
        printf("\n%s Loves %d Percent with %s", n1,love,n2);
        printf("\n\nHave a Happy Life!!\n\n");
        printf("Enter 0 to exit\n");
        scanf("%d", &i);
    }while(i==9);
    return 0;
}