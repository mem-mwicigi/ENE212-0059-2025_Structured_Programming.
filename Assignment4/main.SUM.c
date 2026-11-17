#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum = 0;
    //ask the user to enter the number of elements
    printf("\nInput the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nInput %d elements in the array", n);
    for(int i = 0; i < n; i++){
        printf("\nelement - %d: ", i);
        scanf("%d", &arr[i]);
        //find sum
        sum += arr[i];
    }
    printf("\nSum of all elements stored in the array is: %d", sum);

    return 0;
}
