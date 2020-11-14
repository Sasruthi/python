#include <stdio.h>
int main ()
{
    int n,min,a;
  printf("Enter how many numbers you wish :  ");
    scanf("%d", &a);
    for(int i = 0; i<a; i++)
    {printf("Enter the  number : ");
           scanf(" %d", &n);
           if(i == 0)
              min = n;
           else
              if(n < min)
                 min = n;}
        printf("The smallest integer is  %d", min);

}
