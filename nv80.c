//print first n fibonacci numbers.
#include<stdio.h>
void fibo(int n){
    int first=0;
    int sec=1;
    int next;
    for(int i=1;i<=n;i++){
        printf("%d ",first);
        next=first+sec;
        first=sec;
        sec=next;
    }
    return;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    fibo(n);
    return 0;
}