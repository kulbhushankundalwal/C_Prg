#include <stdio.h>
int fac(int x);

int main(){
    int x;
    printf("Enter the number: ");
    scanf("%d", &x);
    printf("The factorial of the number is %d", fac(x) );
    return 0;
}

int fac(int x){
    int f;
    if(x==1 || x==0){
        return 1;
    }
    else{
        f=fac(x-1)*x;
        return f;
    }
    
}