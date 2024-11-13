//a guessing game.
#include<stdio.h>
int main(){
    int lucky_number=7;
    int n;
    printf("Enter number: \n");
    int i=0;
    while(n!=lucky_number){
        scanf("%d",&n);
        if(n==lucky_number){
            printf("Congratulation ! ");            
        }
        else{
            continue;
        }
    }
    return 0;
}