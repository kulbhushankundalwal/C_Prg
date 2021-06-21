#include <stdio.h>

int main(){
    int n, sum=0;
    printf("Enter your number: ");
    scanf("%d", &n);

    for(int i=0;i<=n;i++){
        sum=sum+i;
    }

    printf("The sum of n natural number is %d", sum);
    return 0;
}