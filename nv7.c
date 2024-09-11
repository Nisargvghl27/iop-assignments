//calculate the area of triangle
#include<stdio.h>
int main()
{
    float a,b,h;  
    //a=area,b=base,h=height
    printf("Enter the base of the triangle: ");
    scanf("%f", &b);
    printf("Enter the height of the triangle: ");
    scanf("%f", &h);
    a=0.5*b*h;
    printf("The area of the triangle is: %f %f\n", a);
    return 0;
}