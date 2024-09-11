//check weather a number is palindrom or not
#include<stdio.h>
int pn(int n){               //pn=plindrom number
    int on=n;                //on=original number
    int rn=0;                //rn=reversed number
    int re;                  //re=reminder
    while(n!=0){
        re=n%10;
        rn=rn*10+re;
        n/=10;
    }
    return (on==rn);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(pn(num)){
        printf("%d is a palindrom.\n",num);
    }
    else{
        printf("%d is not a palindrom.\n",num);
    }
    return 0;
}