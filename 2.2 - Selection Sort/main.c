#include <stdio.h>
#include <stdlib.h>

int main (void) {
    int array[] = {9,6,2,1,7,4,5};
    int arrayLength = 7;

    // SELECTION SORT ALGORITHM (O(N^2)
    for (int i = 0; i < arrayLength; i++) {
        for (int j = i + 1; j < arrayLength; j++) 
        {
            if (array[i] > array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }

    for (int i = 0; i < arrayLength; i++) {
        printf("%d", array[i]);
    }

    return 0;
}
