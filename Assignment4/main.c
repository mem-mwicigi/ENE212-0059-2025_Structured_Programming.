#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a;
    int b;
    //ask the user to enter the number of elements
    printf("\nInput the size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("\nInput the %d elements in the array: ", n);
    for(int i = 0; i < n; i++){
        printf("\nelement - %d: ", i);
        scanf("%d", &arr[i]);
        for (a = i + 1; a < n; a++){
            if (arr[i] > arr[a]){
                b = arr[i];
                arr[i] = arr[a];
                arr[a] = b;
            }
        }
    }
    printf("\nElements of array in sorted ascending order: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
