//total marks and percentage
#include<stdio.h>
int main()
{
    float phy,che,math,bio,comp;
    printf("enter the marks of subject: \n");
    scanf("%f %f %f %f %f",&phy,&che,&math,&bio,&comp);
    printf("toatl marks is %f \n",phy+che+math+bio+comp);
    printf("percentage is %f",(phy+che+math+bio+comp)/500*100);
    return 0;
}