#include<stdio.h>
int main()
{
int sum=0,i;
for(i=2;i<=30;i++)
{
  if(i%2==0)
    sum+=i;

  }
  printf("THE  SUM  OF  EVEN  INTEGERS  FROM 2  TO  30: %d",sum);
    return 0;
}

