#include <stdio.h>

int main(){
    int n,i,fac=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        fac *= i; //Alternatively, fac=fac*i
    }printf("The Factorial of %d is %d\n", n,fac);
    return 0;
}