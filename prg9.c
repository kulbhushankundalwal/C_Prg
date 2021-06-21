#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Number Guessing Game

int main(){
    srand(time(0));
    int num=rand()%100+1, nguess=1,scn;
    printf("Guess any number between 1 to 100\n");
    do{
        printf("Enter your number\n");
        scanf("%d", &scn);
        if(scn>num) {
            printf("Please enter lower number\n");
        }
        else if(scn<num){
            printf("Please enter great number\n");        
        }
        else{
            printf("You guessed the right number in %d attempts", nguess);
        }
        nguess++;
    }while(scn!=num);
    return 0;
}