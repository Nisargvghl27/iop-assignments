//read total seconds and convert into time
#include<stdio.h>
int main()
{
    long ts;      //ts=total seconds
    int h,m,s;    //h=hours,m=minutes,s=seconds
    printf("Enter total seconds: ");
    scanf("%ld",&ts);
    h=ts/3600;
    ts%=3600;
    m=ts/60;
    s=ts%60;
    printf("Time: %d hours, %d minutes, %d seconds\n",h,m,s);
    return 0;
}    