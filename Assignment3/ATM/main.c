#include <stdio.h>
#include <stdlib.h>
#include<windows.h>

void displayMenu();
void checkBalance(double balance);
int login();
int menu();
double deposit(double balance, double amount);
double withdraw(double balance, double amount);


int main(){
    printf("\n======================================================\n");
    printf("\n         IMANI DIGITAL BANKING SYSTEM                 \n");
    printf("\n=======================================================\n");
    if (login() == 1){
        displayMenu();
    }else{
        printf("\nYour account has been locked. Please visit our nearest branch.\n");
    }
    return 0;
}
int login(){
    for (int t = 0; t = 1; t = t){
        const int correct_pin = 4321;
        int user_pin, attempts = 0, access_granted = 0;
    //Ensure that attempts are less than 3
        while(attempts < 3){
            printf("\nEnter your secret pin: \n");
            scanf("%d", &user_pin);
            if (user_pin == correct_pin){
                printf("\nLoging you in. Please wait............\n");
                Sleep(10000);
                printf("\nWelcome to our digital banking system.\n");
                return 1;
            }
            if (user_pin < 1000){
                printf("\nPin must be atleast 4 digits\n");
            }else if(user_pin > 9999){
                printf("\nThe number of pin digits is 4\n");
            }else{
                printf("\nInvalid pin\n");
            }
            attempts++;
            printf("Attempts Remaining: %d\n", 3 - attempts);
    }
    return 0;
    }
}
void displayMenu(double balance){
    int choice;
    double amount;
    do{
        choice = menu();
        printf("How may we serve you today?(1-4)" );
        scanf("%d", &choice);
        switch(choice){
        case 1:
            checkBalance(balance);
            break;
        case 2:
            printf("\nEnter the amount you want to deposit: \n");
            scanf("%lf", &amount);
            balance = deposit(balance, amount);
            break;
        case 3:
            printf("\nEnter the amount you want to withdraw: \n");
            scanf("%lf", &amount);
            balance = withdraw(balance, amount);
            break;
        case 4:
            printf("Logging you out, please wait.........");
            Sleep(10000);
            printf("\n>>>>>>>>>>>>>>>>>>>>>>>>THANK YOU FOR VISITING US.<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
            break;
        default:
            printf("\n!!!!!!!!!!!INVALID OPTION!!!!!!!!!!!\n");
        }
    }while(choice != 4 || choice < 1 || choice > 4);
}

int menu(){
    printf("\n-----------------------ATM MENU-------------------\n");
    printf("How may I help you?");
    printf("\n1. Balance Inquiry\n");
    printf("\n2. Deposit\n");
    printf("\n3. Withdraw\n");
    printf("\n4. Exit\n");
}
void checkBalance(double balance){
    printf("\nChecking your balance, please wait.......\n");
    Sleep(10000);
    printf("\nYour account balance is: %.2f\n", balance);
}
double deposit(double balance, double amount){
    if (amount <= 0){
        printf("\nThe amount to be deposited must be greater than 0!!!!!!!\n");
    }else{
        balance += amount;
        printf("\nProcessing your deposit, please wait.......\n");
        Sleep(10000);
        printf("\nYour deposit of Ksh %.2f was successful.\n", amount);
        printf("\nYour new account balance is %.2f.\n", balance);
    }
    return balance;
}

double withdraw(double balance, double amount){
    if(amount <= 0){
        printf("\nThe amount to be withdrawn must be greater than 0!!!!!!!!!!!\n");
    }else if (amount > balance){
        printf("\nInsufficient balance to complete the transaction!!!!!!!!!!!\n");
    }else{
        balance -= amount;
        printf("\nProcessing your withdrawal, please wait.......\n");
        Sleep(10000);
        printf("\nYour withdrawal of Ksh %.2f was successful. \n", amount);
        printf("\nYour new account balance is Ksh %.2f.\n", balance);
    }
    return balance;
}


