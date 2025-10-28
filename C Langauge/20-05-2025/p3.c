#include<stdio.h>
void main() {
    int size, index, j, temp;

    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &size);

    int ar[size]; // Use a variable length array (VLA)

    printf("Enter the elements for the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &ar[i]);
    }

    // Selection Sort Algorithm
    for (int i = 0; i < size - 1; i++) {
        index = i; // Assume the current element is the minimum

        // Find the index of the minimum element in the unsorted part
        for (j = i + 1; j < size; j++) {
            if (ar[j] < ar[index]) {
                index = j;
            }
        }

        // Swap the minimum element with the current element
        temp = ar[i];
        ar[i] = ar[index];
        ar[index] = temp;
    }

    printf("The sorted values are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", ar[i]);
    }
    printf("\n");
}
