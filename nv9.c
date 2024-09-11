//Read hr,min and sec then convert into total seconds
#include<stdio.h>
int main()
{
    int h,m,s;      //h=hours,m=minutes,s=seconds
    int ts;         //ts=total seconds
    printf("Enter hours: ");
    scanf("%d",&h);
    printf("Enter minutes: ");
    scanf("%d",&m);
    printf("Enter seconds: ");
    scanf("%d",&s);
    ts=(h*3600)+(m*60)+s;
    printf("Total seconds: %d\n",ts);
    return 0;
}