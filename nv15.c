//Read the marks of five subjects and print division
#include<stdio.h>
int main(){
    int phy,che,math,comp,eng,marks;
    float per;                        //per=percentage
    printf("Enter the marks of Physics: ");
    scanf("%d",&phy);
    printf("Enter the marks of Chemistry: ");
    scanf("%d",&che);
    printf("Enter the marks of Maths: ");
    scanf("%d",&math);
    printf("Enter the marks of Computer: ");
    scanf("%d",&comp);
    printf("Enter the marks of English: ");
    scanf("%d",&eng);
    marks=phy+che+math+comp+eng;
    per=(marks*100)/500;
    if(per>=85){
        printf("Your grade is A");}
    else if(per>=70 && per<85){
        printf("Your grade is B");}
    else if(per>=55 && per<70){
        printf("Your grade is C");}
    else if(per>=33 && per<55){
        printf("Your grade is D");}
    else{
        printf("You are Fail");}
    return 0;}