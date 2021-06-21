#include <stdio.h>

int main(){
    int a,b,area;
    printf("Enter Length of the Rectangle\n");
    scanf("%d", &a);
    printf("Enter Breath of the Rectangle\n");
    scanf("%d", &b);
    area=a*b;
    printf("The area of Rectangle is %d\n", area);
    return 0;
}