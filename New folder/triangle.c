#include<stdio.h>
#include<math.h>
int main()
{float area,a,b;
float c,d;
printf("Enter the values of base and height:");
scanf("%f %f", &a ,&b);
printf("Enter  c:");
scanf("%f",&c);
d=sin(c);
area=0.5*(a*b*d);
printf("The area=%f", area);
return 0;}
