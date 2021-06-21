#include <stdio.h>

int main(){
    int n, i;
    printf("Enter your number: ");
    scanf("%d", &n);
    for(i=2; i<n; i++){
        if(n%i==0){
            printf("\nThe number is a not a Prime Number");
            break;
        }
        else{
            printf("\nThe number is a Prime Number");
            break;
        }
    }
    return 0;
}