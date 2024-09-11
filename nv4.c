//convert temperature in centigrade from fahrenheit
#include<stdio.h>
int main()
{
    float f,c;    //f=fahrenheit,c=centigrade
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c=(f-32)*5/9;
    printf("Temperature in Celsius: %f %f\n", c);
    return 0;
}