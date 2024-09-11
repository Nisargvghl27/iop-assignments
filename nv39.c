//print 1/1!+2/2!+3/3!+.....
#include<stdio.h>
int f(int n)             //f=factorial
{
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
double cs(int t)          //cs=computer series, t=terms
{
    double s=0.0;
    for(int i=1;i<=t;i++){
        s+=(double)i/f(i);
    }
    return s;
}
int main(){
    int nt;                //nt=number of terms;
    printf("Enter the number of terms: ");
    scanf("%d",&nt);
    double r=cs(nt);       //r=result
    printf("The sum of the series is %lf",r);
    return 0;
}