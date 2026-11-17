#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    //ask the user to enter the number of elements
    printf("\nInput the number of elements to store in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nInput %d number of elements in the array: ", n);
    for(int i = 0; i < n; i++){
        printf("\nelement - %d: ", i);
        scanf("%d", &arr[i]);
    }
    //values stored into the array
    printf("\nThe values stored into the array are: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    //values stored into the array in reverse
    printf("\nThe values store into the array in reverse are: ");
    for( int i = n -1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
