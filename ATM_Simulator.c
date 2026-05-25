#include <stdio.h>
int main()
{
    int balance=2000,amount,choice;
    printf("\n1.Deposit\n2.Withdraw\n3.Balance Enquiry\n");
    printf("Enter your choice:"); 
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: 
              printf("Enter amount to deposit: ");
              scanf("%d",&amount);
              balance=balance+amount;
              printf("Amount credited, your balance=%d",balance);
              break;
        case 2:
              printf("Enter amount to withdraw: ");
              scanf("%d",&amount);
              if(balance-amount>500)
              {
                 balance=balance-amount;
                 printf("Amount debited, your balance=%d",balance);
              }
              else
              printf("Withdraw not possible, maintain minimum balance");
              break;
        case 3: 
              printf("Your balance amount= %d",balance);
              break;
        default: printf("Please enter option between 1-3\n");
              break;
    }
}