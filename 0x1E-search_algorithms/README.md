Introduction
This project involves implementing search algorithms in C, specifically focusing on linear and binary searches. These algorithms are foundational in computer science and critical for efficient data retrieval.

Linear Search
Prototype: int linear_search(int *array, size_t size, int value);
Returns: First index of value, or -1 if not found or array is NULL
Prints: Each value as it's compared
Example
c
Copy code
#include "search_algos.h"
int main(void) {
    int array[] = {10, 1, 42, 3, 4, 42, 6, 7, -1, 9};
    size_t size = sizeof(array) / sizeof(array[0]);
    printf("Found %d at index: %d\n", 3, linear_search(array, size, 3));
    return (EXIT_SUCCESS);
}
Binary Search
Prototype: int binary_search(int *array, size_t size, int value);
Returns: Index of value, or -1 if not found or array is NULL
Prints: Array being searched each time it changes
Example
c
Copy code
#include "search_algos.h"
int main(void) {
    int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    size_t size = sizeof(array) / sizeof(array[0]);
    printf("Found %d at index: %d\n", 2, binary_search(array, size, 2));
    return (EXIT_SUCCESS);
}


