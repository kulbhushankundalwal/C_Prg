#include <stdio.h>
void swap(int *x, int *y);

int main(){
    int x, y;
    printf("Enter the Value of X: ");
    scanf("%d", &x);
    printf("Enter the Value of Y: ");
    scanf("%d", &y);
    swap(&x, &y);
    printf("The Swapped values are X is %d and Y is %d", x,y);
    return 0; 
}

void swap(int *x, int*y){
    int z=*x;
    *x=*y;
    *y=z;
}