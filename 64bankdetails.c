#include <stdio.h>
#include <string.h>

// void details()
// {
//     int account_number;
//     int pin;

//     printf("please enter your account number \n");
//     scanf("%d", &account_number);

//     printf("enter you security pin \n");
//     scanf("%d", &pin);
// }

int main()
{
    FILE *ptr1;
    FILE *ptr2;

    int choice;
    int operation;
    int account_number1;
    int pin1;
    float balance = 856321.23;
    char name[30];

    printf("please enter your account number \n");
    scanf("%d", &account_number1);

    printf("enter you security pin \n");
    scanf("%d", &pin1);

    // printf("please enter your balance \n");
    // scanf("%f \n", &balance);

    // printf("please provide your name \n");
    // scanf("%s \n", name);

    printf("choose 1 for checking balance \n");
    printf("choose 2 for withdrawing the amount from your account \n");
    printf("choose 3 for depositing money into your account \n");
    printf("choose 4 for updating your account details \n");

    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        printf("you chose check balance");
        int account_number2;
        int pin2;

        printf("please enter your account number \n");
        scanf("%d", &account_number2);

        printf("enter you security pin \n ");
        scanf("%d", &pin2);

        if (account_number1 == account_number2 && pin1 == pin2)
        {
            printf("your balance is %f", balance);
        }
        else
        {
            printf("give matching details");
        }
        break;

    case 2:
        printf("you chose withdrawl \n");
        int account_number3;
        int pin3;

        printf("please enter your account number \n");
        scanf("%d", &account_number3);

        printf("enter you security pin \n");
        scanf("%d", &pin3);

        if (account_number1 == account_number3 && pin1 == pin3)
        {
            printf("enter withdrawing amount \n");
            float withdraw;
            scanf("%f", &withdraw);
            printf("amount remaining in your account is %f \n", balance - withdraw);
            ptr1 = fopen("transaction details.txt", "a");

            fprintf(ptr1, "account number%d \n", account_number3);
            fprintf(ptr1, "balance %f \n", balance);
            fprintf(ptr1, "withdrawn amount %f \n", withdraw);
            fprintf(ptr1, "new balance %f \n \n", balance - withdraw);
        }
        else
        {
            printf("give matching details");
        }
        break;

    case 3:
        printf("you choose deposition \n");
        int account_number4;
        int pin4;

        printf("please enter your account number \n");
        scanf("%d", &account_number4);

        printf("enter you security pin \n");
        scanf("%d", &pin4);

        if (account_number1 == account_number4 && pin1 == pin4)
        {
            printf("enter deposition amount \n");
            float deposit;
            scanf("%f", &deposit);
            printf("amount remaining in your account is %f \n", balance + deposit);
            ptr1 = fopen("transaction details.txt", "a");

            fprintf(ptr1, "account number%d \n", account_number4);
            fprintf(ptr1, "balance %f \n", balance);
            fprintf(ptr1, "deposited amount %f \n", deposit);
            fprintf(ptr1, "new balance %f \n\n", balance + deposit);
        }
        else
        {
            printf("give matching details");
        }
        break;

    case 4:
        printf("you choose update \n");
        int account_number5;
        int pin5;
        int contact_number;
        char name[30];

        printf("please enter your account number \n");
        scanf("%d", &account_number5);

        printf("enter you security pin \n");
        scanf("%d", &pin5);

        // printf("please provide your contact number \n");
        // scanf("%d \n", &contact_number);

        // printf("please provide account holders name \n");
        // scanf("%c \n", &name);

        if (account_number1 == account_number5 && pin1 == pin5)
        {

            printf("please choose which field you want to update \n");
            printf("choose 1 for updating security pin\n");
            printf("choose 2 for updating your emergency contact number\n");
            printf("choose 3 for changing account holders name\n");
            scanf("%d \n", &choice);

            if (choice == 1)
            {
                printf("you chose to update security pin\n");
                int new_pin;
                printf("enter new 4 digit security pin\n");
                scanf("%d \n", &new_pin);
                printf("successfully updated pin\n");
                printf("your new pin is %d\n", new_pin);

                ptr2 = fopen("update details.txt", "a");
                fprintf(ptr2, "old security pin%d \n", pin5);
                fprintf(ptr2, "new security pin%d \n\n", new_pin);
                break;
            }

            else if (choice == 2)
            {
                printf("you chose to change you emergency contact number\n");
                int new_contact;
                printf("enter new 10 digit contact number\n");
                scanf("%d \n", &new_contact);
                printf("successfully updated contact number\n");
                printf("new contact number is\n", new_contact);

                ptr2 = fopen("update details.txt", "a");
                fprintf(ptr2, "account holders old contact number was %d\n", contact_number);
                fprintf(ptr2, "account holders new contact number is %d\n\n", new_contact);
                break;
            }
            else if (choice == 3)
            {
                printf("you chose to update account holder's name\n");
                char new_name[30];
                printf("enter new name\n");
                scanf("%s \n", &new_name);
                printf("the account holders new name is %c\n", new_name);

                ptr2 = fopen("update details.txt", "a");
                fprintf(ptr2, "account holders old name was %c\n", name);
                fprintf(ptr2, "account holders new name is %c\n\n", new_name);
                break;
            }
            else
            {
                printf("please choose given entries");
            }

            // switch (choice)
            // {
            // case 1:
            //     printf("you chose to update security pin\n");
            //     int new_pin;
            //     printf("enter new 4 digit security pin\n");
            //     scanf("%d \n", &new_pin);
            //     printf("successfully updated pin\n");
            //     printf("your new pin is %d\n", new_pin);

            //     ptr2 = fopen("update details.txt", "a");
            //     fprintf(ptr2, "old security pin%d \n", pin5);
            //     fprintf(ptr2, "new security pin%d \n\n", new_pin);
            //     break;

            // case 2:
            // printf("you chose to change you emergency contact number\n");
            // int new_contact;
            // printf("enter new 10 digit contact number\n");
            // scanf("%d \n", &new_contact);
            // printf("successfully updated contact number\n");
            // printf("new contact number is\n", new_contact);

            // ptr2 = fopen("update details.txt", "a");
            // fprintf(ptr2, "account holders old contact number was %d\n", contact_number);
            // fprintf(ptr2, "account holders new contact number is %d\n\n", new_contact);
            // break;

            // case 3:
            //     printf("you chose to update account holder's name\n");
            //     char new_name[30];
            //     printf("enter new name\n");
            //     scanf("%s \n", &new_name);
            //     printf("the account holders new name is %c\n", new_name);

            //     ptr2 = fopen("update details.txt", "a");
            //     fprintf(ptr2, "account holders old name was %c\n", name);
            //     fprintf(ptr2, "account holders new name is %c\n\n", new_name);
            //     break;

            // default:
            //     printf("please choose given entries");
            // }
        }
        else
        {
            printf("give matching details");
        }
        break;

    default:
        printf("please choose given entries");
        break;
    }
    return 0;
}
