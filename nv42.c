//rean number and print if number is prime or composite
#include<stdio.h>
#include<stdbool.h>
bool p(int n)            //p=prime
{
    if(n<=1)return false;
    if(n==2)return true;
    if(n%2==0)return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(p(num)){
        printf("%d is a prime number.\n",num);
    }
    else{
        printf("%d is a composite number.\n",num);
    }
    return 0;
}