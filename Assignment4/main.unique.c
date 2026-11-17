#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int count;
    //ask the user to enter the number of elements
    printf("\nInput the number of elements to be stored in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nInput %d elements in the array", n);
    for(int i = 0; i < n; i++){
        printf("\nelement - %d: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\nThe unique number of elements found in the array are: ");
    for(int i = 0; i < n; i++){
        count = 0;
        for(int j = 0; j < n; j++){
            if (arr[i] == arr[j]){
                count++;
            }
        }
       if (count == 1){
        printf("%d ", arr[i]);
       }
    }
    return 0;
}
