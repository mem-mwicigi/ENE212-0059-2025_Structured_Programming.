#include <stdio.h>
#include <stdlib.h>

int main()
{
 for( int t = 1; t >= 0; t = t ){
    const int correct_pin = 4321;
    int user_pin, attempts = 0, access_granted = 0;
    //Ensuring a maximum attempt of 3 times
    while(attempts < 3){
        printf("Please enter your personal pin: ");
        scanf("%d", &user_pin);

      //Validating pin length
        if(user_pin < 1000){
        printf("PIN is too short (must be 4 digits)");
    }
        else if(user_pin > 9999){
        printf("PIN is too long (must be 4 digits)");
    }
        else{
        printf("PIN is exactly 4 digits");
    }
        if(user_pin == correct_pin){
        access_granted = 1;
    }
        else{
        attempts++;
        printf("Attempts remaining: %d\n", 3 - attempts);
    }
    if(access_granted){
        int choice;
        printf("\n===Device Menu===\n");
        printf("1. Open Door\n");
        printf("2. Change Username\n");
        printf("3. Change Pin\n");
        printf("4. Exit\n");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Access granted. Door unlocked\n");
                break;
            case 2:
                printf("Change username feature coming soon.\n");
                break;
            case 3:
                printf("Change PIN feature coming soon.\n");
                break;
            case 4:
                printf("Exiting system.\n");
                break;
            default:
                printf("Invalid option! Please try again.\n");
                break;
        } return 0;
    }

      }
      printf("\nSystem locked! Wait for 5 seconds...\n");
        for(int i = 5; i >= 1; i--){
        printf("%d...", i);

        }
        printf("\nYou can try again now.\n");
      }
}
