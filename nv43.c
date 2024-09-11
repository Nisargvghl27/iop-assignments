//program to calculate commision for a salse representative
#include<stdio.h>
int main(){
    double s,c;             //s=sales,c=commission
    printf("Enter the sales amount:");
    scanf("%lf",&s);
    if(s<=500){
        c=0.05*s;
    }
    else if(s<=2000){
        c=35+0.10*(s-500);
    }
    else if(s<=5000){
        c=185+0.12*(s-2000);
    }
    else{
        c=0.125*s;
    }
    printf("The commission is Rs %f %f.\n",c);
    return 0;
}