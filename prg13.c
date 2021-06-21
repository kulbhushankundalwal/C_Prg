#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter your number: ");
    scanf("%d", &n);

    for(int i=0;i<=10;i++){
        sum=sum+(i*n);
    }

    printf("The sum of the natural number in table of %d is %d", n, sum);
    return 0;
}