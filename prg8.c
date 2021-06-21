#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));
    int love = rand()%100 + 1;
    char n1[30];
    char n2[30];
    printf("Welcome to Love Calculator\n\n");
    printf("Enter Your Name: ");
    gets(n1);
    printf("Enter Your Crush Name: ");
    gets(n2);
    printf("%s Loves %d Percent with %s", n1,love,n2);
    return 0;
}