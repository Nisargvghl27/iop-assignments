//Earth takes a period of revolution is 31558150 seconds.
//then convert this into day,hours and minutes
#include<stdio.h>
int main()
{
    long ts=31558150;                                     //ts=total seconds
    const int sm=60;                                      //sm=seconds in minutes
    const int sh=3600;                                    //sh=seconds in hour
    const int sd=86400;                                   //sd=seconds in days
    int d=ts/sd;
    long rs=ts%sd;                                        //rs=remainder seconds
    int h=rs/sh;
    rs%=sh;
    int m=rs/sm;
    rs%=sm;
    printf("Total period of revolution:\n");
    printf("%d days\n",d);
    printf("%d hours\n",h);
    printf("%d minutes\n",m);
    printf("%ld seconds\n",rs);
    return 0;
}