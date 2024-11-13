//function to return 1 if prime, 0 otherwise.
#include<stdio.h>
int isprime(int n){
    if(n<=1)
    return 0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d is %s\n",n,isprime(n)?"prime":"not prime");
    return 0;
}