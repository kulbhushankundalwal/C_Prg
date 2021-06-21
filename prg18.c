/*WAP to Calculate the sum and Avegrage of two
numbers using function and pointers,
and print sum and average in main*/

// We can get two values in return with a void function
//USE %0.nf or %.nf to get value upto n decimal point
//int op int gives int but forcefully, we can get float

#include <stdio.h>
void sumavg(int a, int b, int *sum, float *avg);

int main(){
    int a, b, sum;
    float avg;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);
    sumavg(a,b,&sum,&avg);
    printf("The Sum is %d and Average is %.2f", sum, avg); //USE %0.nf or %.nf to get value upto n decimal point
    return 0;
}

void sumavg(int a, int b, int *sum, float *avg){
    *sum=a+b;
    *avg=(float)(*sum)/2; //int op int gives int but forcefully, we can get float
}