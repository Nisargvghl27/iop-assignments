//print fibonacci series
#include<stdio.h>
int main(){
    int n,f=0,s=1,next;
    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d",&n);
    printf("Fibonacci series: \n");
    for(int i=0;i<n;i++){
        if(i==0){
            printf("%d\n",f);
        }
        else if(i==1){
            printf("%d\n",s);
        }
        else{
            next=f+s;
            f=s;
            s=next;
            printf("%d\n",next);
        }
    }
    return 0;
}