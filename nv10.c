//calculate cutoff marks
#include<stdio.h>
int main()
{
    int m,p,c,e,cm;   //m=maths, p=physics, c=chemistry, e=entrance exam, cm=cutoff marks
    printf("Enter marks of Maths: ");
    scanf("%d",&m);
    printf("Enter marks of Physics: ");
    scanf("%d",&p);
    printf("Enter marks of Chemistry: ");
    scanf("%d",&c);
    printf("Enter marks of Entrance exam: ");
    scanf("%d",&e);
    cm=m/2+p/2+c/2+e;
    printf("Cutoff marks:%d",cm);
    return 0;
}