//check weather a number is armstrong or not.
#include<stdio.h>
#include<math.h>
int countdigits(int num){
    int count=0;
    while(num!=0){
        num/=10;
        ++count;
    }
    return count;
}
int isarmstrong(int num){
    int originalnum=num;
    int digits=countdigits(num);
    int sum=0;
    while(num!=0){
        int digit=num%10;
        sum+=pow(digit,digits);
        num/=10;
    }
    return(sum==originalnum);
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(isarmstrong(num)){
        printf("%d is an armstrong number.\n",num);
    }
    else{
        printf("%d is not an armstrong number.\n",num);
    }
    return 0;
}