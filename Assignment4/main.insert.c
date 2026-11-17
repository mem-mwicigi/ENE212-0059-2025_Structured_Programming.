#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pos;
    int value;
    int n;
    //ask the user to enter the number of elements
    printf("\nInput the size of array: ");
    scanf("%d", &n);
    //the array + the element being insreted
    int arr[n +1];
    printf("\nInput %d elements in the array in ascending order: ", n);
    for(int i = 0; i < n; i++){
        printf("\nelement - %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nInput the value to be inserted: ");
    scanf("%d", &value);
    printf("\nInput the position, where the value to be inserted: ");
    scanf("%d", &pos);
    printf("\nThe current list of the array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    //creating space
    for(int i = n; i >= pos; i--){
        arr[i] = arr[i - 1];
    }
    //insertion
    arr[pos -1] = value;
    printf("\nAfter inserting the element the new list is: ");
    for(int i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
