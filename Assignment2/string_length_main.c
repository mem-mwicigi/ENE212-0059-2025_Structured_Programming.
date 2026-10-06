#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[50];
    int length;
    //Asking the user to enter a string
    printf("Enter a string(like your name): ");
    scanf("%s", text);
    //Print the string back to the user
    printf("You entered: %s\n", text);
    //Find and display the length of the string
    length = strlen(text);
    printf("The length of the string is: %d\n", length);


    return 0;
}
