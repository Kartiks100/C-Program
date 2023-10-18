#include <stdio.h>

#define SIZE 5

int main() {
    int target, array[SIZE], i, j;
    int result[2] = {-1, -1}; // Initialize the result array with invalid values

    printf("Enter %d Values in the Array: ", SIZE);
    for (i = 0; i < SIZE; i++)
        scanf("%d", &array[i]);

    printf("Enter Target Value: ");
    scanf("%d", &target);

    for (i = 0; i < SIZE; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (array[i] + array[j] == target) {
                result[0] = i;
                result[1] = j;
                break;
            }
        }
        if (result[0] != -1) // If valid indices are found, break the loop
            break;
    }

    if (result[0] != -1) {
        printf("Indices: %d and %d\n", result[0], result[1]);
    } else {
        printf("No valid indices found.\n");
    }

    return 0;
}
