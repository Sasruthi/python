#include<stdio.h>
#include<stdbool.h>
int main()
{
  int anum;
  float bal, charges, credits, creditLimit, accountBalance;
  while(true)
    {
    printf( "Enter account number ( -1 to end ): " );
    scanf( "%d", &anum );
    if ( anum == -1 )
    {
      return 0;
    }
    printf("Enter beginning balance: ");
    scanf("%f", &bal);
    printf("Enter total charges: ");
    scanf("%f", &charges );
    printf("Enter total credits: ");
    scanf("%f", &credits );
    printf("Enter credit limit: ");
    scanf( "%f", &creditLimit );

    accountBalance = bal+charges-credits;

    if ( accountBalance > creditLimit )
    {
      printf("\nAccount number: %d", anum);
      printf("\nCredit Limit: %.2f", credits);
      printf("\nBalance: %.2f", accountBalance);
      printf("\nCredit limit exceeded.\n\n");
    }
  }
  return 0;
}
