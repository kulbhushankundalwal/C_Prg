#include <stdio.h>

int main(){
    int a, b, c, d, sum=0;
    printf("Enter any 4 Digit Number\n");
    scanf("%d", &a);
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    a=a/10;
    sum=a+b+c+d;
    printf("The Sum of the digits of this number is %d", sum);
    return 0;
}