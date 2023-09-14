#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int unorderedLength;
    int unorderedList[] = {5, 2, 4, 6, 1, 3};
    int key, previousIndex, currentItem;

    for (int i = 1; i < 6; i++) 
    {
        currentItem = unorderedList[i];
        previousIndex = i - 1;

        // Check if current item is still lower than previous item and keep reassigning values.
        while(previousIndex >= 0 && unorderedList[previousIndex] > currentItem) 
        {
            unorderedList[previousIndex + 1] = unorderedList[previousIndex];
            previousIndex = previousIndex - 1; 
            unorderedList[previousIndex + 1] = currentItem;
            
        }
    }

    for (int i = 0; i < 6; i++) {
        printf("%d\n", unorderedList[i]);
    }
    return 0;
}