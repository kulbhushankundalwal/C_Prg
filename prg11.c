#include <stdio.h>

int main(){
    int sub1, sub2, sub3;
    printf("Enter the Number of Subject 1 out of 100: ");
    scanf("%d", &sub1);
    printf("Enter the Number of Subject 2 out of 100: ");
    scanf("%d", &sub2);
    printf("Enter the Number of Subject 3 out of 100: ");
    scanf("%d", &sub3);

    float total=(sub1+sub2+sub3)/3;

    if(total>=40 && sub1>=33 && sub2>=33 && sub3>=33){
        printf("Congrats! You are passed with %f Percantage", total);
    }
    else{
        printf("Ohh! You are failed with %f Percent", total);
    }
    return 0;
}