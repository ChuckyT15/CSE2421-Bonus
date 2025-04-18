#include <stdio.h>

int main() {
    // Initialize variables
    int array[50]; 
    int i = 0 
    int size = 0;
    int sum = 0;

    printf("Enter the size of the array: ");
    scanf("%i", &size);

    // Ask user for integers in array
    printf("Enter the integers in the array:\n");
    for (i = 0; i < size; i++) {
        scanf("%i", &array[i]);
    }

    // Sum the array
    for (i = 0; i < size; i++) {
        sum += array[i];
    }

    // Print the sum
    printf("Sum of the array elements: %i\n", sum);

    return 0;
}
