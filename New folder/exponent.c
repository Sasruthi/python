#include<stdio.h>
int main()
{ int i, n;
    float x, sum=1, t=1;
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {t=t*x/i;
        sum=sum+t;
    }
    printf("\nThe exponential value of %f= %4f", x, sum);
    return 0;
}
