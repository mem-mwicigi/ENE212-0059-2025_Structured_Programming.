#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int max;
    int min;
    //ask the user to enter the number of elements
    printf("\nInput the number of elements to store in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nInput %d elements in the array: ", n);
    //finding max and min
    for(int i = 0; i < n; i++){
        printf("\nelement - %d: ", i);
        scanf("%d", &arr[i]);
        max = arr[0];
        min = arr[0];
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("\nMaximum element: %d", max);
    printf("\nMinimum element: %d\n", min);

    return 0;
}
