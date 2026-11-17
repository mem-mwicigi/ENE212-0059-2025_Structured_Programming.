#include <stdio.h>
#include <stdlib.h>

int main()
{
    const int BUFFER_SIZE = 5;
    int buffer[BUFFER_SIZE];
    int head = 0;
    int count = 0;
    int value;
    printf("\nBUFFER_SIZE = %d", BUFFER_SIZE);
    printf("\nEnter the sensor values(enter -1 to stop and print)");
    while(1){
        printf("\nEnter sensor Value: ");
        scanf("%d", &value);
        if(value == -1){
            break;
        }
        buffer[head] = value;
        head = (head + 1) % BUFFER_SIZE;
        if(count < BUFFER_SIZE){
            count++;
        }
    }
    if(count == 0){
        printf("\nBuffer is empty");

    }else{
        int start;
        if (count == BUFFER_SIZE){
            start = head;
        }else{
            start = 0;
    }
    printf("\nStored samples (oldest to newest): ");
    for(int i = 0; i < count; i++){
        int index = (start + i) % BUFFER_SIZE;
        printf("%d ", buffer[index]);
    }
    }

    return 0;
}
