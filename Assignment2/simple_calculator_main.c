#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    char operate;
    printf("Enter your problem here: ");
    scanf("%d %c %d", &num1, &operate, &num2);
    if (operate == '+') printf("Result: %d\n", num1 + num2);
    if (operate == '-') printf("Result: %d\n", num1 - num2);
    if (operate == '*') printf("Result: %d\n", num1 * num2);
    if (operate == '/'){
        if(num2 != 0){
            printf("Result: %.2f\n", (float)num1 / num2);
        }
        else{
            printf("Math Error");
        }
    }

    if (operate == '%'){
        if(num2 != 0){
            printf("Result: %d\n", num1 % num2);
        }
        else{
            printf("Math Error");
        }
    }
    return 0;
}
