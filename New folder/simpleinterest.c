#include <stdio.h>
int main()
{float p ,t ,r ,I;
printf ("Enter the principle:");
scanf("%f",&p);
printf("Enter the rate:");
scanf("%f",&r);
printf("Enter the time :");
scanf("%f",&t);
I=p*t*r/100;
printf("The simple interest is:%f ",I);
return 0;}
