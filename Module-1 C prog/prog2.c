
/*
    2.	Develop a C Program that performs ATM transactions. The types of ATM transactions are
        1)	Balance checking
        2)	Cash withdrawal
        3)	Cash deposit
        4)  Quit


*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int validPin = 1221;
    int balanceAmount;
    // balanceAmount = rand() % 1000000; random number generator in C.
    balanceAmount = 95000;

    int enteredPin;
    printf("Enter pin number : ");
    scanf("%d", &enteredPin);
    if (enteredPin != validPin)
    {
        printf("Incorrect pin number!!!");
        return -1;
    }

    // menu driven program starts
    while (1)
    {
        printf("****Welcome to ATM Service****\n\n");
        printf("\t1. Check Balance\n\t2. Withdraw Cash\n\t3. Deposit Cash\n\t4. Quit\n");

        printf("Enter your choice: ");
        int choice;
        char question;
        scanf("%d", &choice);

        if (choice == 1)
        {
            // Check balance

            printf("Your Account Balance Rs : %d\n", balanceAmount);
            printf("Do you wish to have another transaction ?(Y/N) : ");
            scanf("\n%c", &question);
            if (question == 'N')
            {
                printf("Thank you");
                break;
            }
        }
        else if (choice == 2)
        {
            // Withdraw cash

            int withdrawAmount;
            printf("Enter amount to be withdrawn : ");
            scanf("%d", &withdrawAmount);
            if (withdrawAmount > balanceAmount)
            {
                printf("Insufficient Funds!!!!\n");
                break;
            }
            balanceAmount = balanceAmount - withdrawAmount;
            printf("Amount Withdrawn Successfully.\n");
            printf("Avaliable balance : %d\n", balanceAmount);
            printf("Do you wish to have another transaction ?(Y/N) : ");
            scanf("\n%c", &question);
            if (question == 'N')
            {
                printf("Thank you");
                break;
            }
        }
        else if (choice == 3)
        {
            // Deposit amount
            int depositAmount;
            printf("Enter deposit amount : ");
            scanf("%d", &depositAmount);
            balanceAmount = balanceAmount + depositAmount;
            printf("Amount deposited sucessfully.\n");
            printf("Do you wish to have another transaction ?(Y/N) : ");
            scanf("\n%c", &question);
            if (question == 'N')
            {
                printf("Thank you");
                break;
            }
        }
        else if (choice == 4)
        {
            printf("Program is exited!!");
            break;
        }
        else
        {
            printf("Invalid choice, please enter valid input.\n\n");
        }
    }

    return 0;
}
