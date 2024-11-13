//calculate NCR.
#include<stdio.h>
int fact(int n){
    if(n==0)
    return 1;
    return n*fact(n-1);
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int main(){
    int n,r;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter r: ");
    scanf("%d",&r);
    printf("NCR(%d,%d)=%d\n",n,r,ncr(n,r));
    return 0;
}