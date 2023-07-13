#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        return -1;  // Return -1 if the array is NULL
    }

    for (size_t i = 0; i < size; i++) {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value) {
            return i;  // Return the index if the value is found
        }
    }

    return -1;  // Return -1 if the value is not found
}
