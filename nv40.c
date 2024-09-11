//read number till a negative number is entered and calculate sum of a list of numbers read
#include<stdio.h>
int main(){
    int n,s=0;
    printf("Enter numbers to sum. Enter a negative number to stop.\n");
    while(1){
        printf("Enter a number: ");
        scanf("%d",&n);
        if(n<0){
            break;
        }
        s+=n;
    }
    printf("The sum of the numbers is %d\n",s);
    return 0;
}