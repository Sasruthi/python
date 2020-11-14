#include<stdio.h>
int main()
{int i,a,t=0,f=0;
for(i=1;i<=10;i++)
{printf("Enter 1 if pass 2 if not:  ");
scanf("%d",&a);
if(a==1)
t+=1;
else
f+=1;}
printf("\nNumber  of  passes=%d",t);
printf("\nNumber  of  failes=%d",f);
if(t>8)
printf("\nBonus to instructor.");
}
