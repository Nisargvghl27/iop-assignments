//chack weather a number is even or odd.
#include<stdio.h>
void oddeven(int n){
    if(n%2==0){
        printf("%d is even.\n",n);
    }
    else{
        printf("%d is odd.\n",n);
    }
    return;
}
int main(){
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    oddeven(num);
    return 0;
}