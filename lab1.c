#include <stdio.h>
int main() {
    // implement array operation
    int size;
    printf("Enter the size of the array: \n");
    scanf("%d", &size);
    int arr[size];

    // i. traversing the array

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < size; i++) {  // tracing
        scanf("%d", &arr[i]);
    }

    // ii. linear search
    int key;
    printf("Enter the element to search: \n");
    scanf("%d", &key);
    int found = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Element found at index %d\n", i);
            found = 1;
            break;
        }
    }
    if (found==0) {
        printf("Element not found in the given array\n");
    }

    // iii. finding the minimum element in the array

    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf("Minimum element in the given array is: %d\n", min);

    // iv. finding the maximum element in the array
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("Maximum element in the given array is: %d\n", max);

    // v. inserting an element in the array
    // a. insertion at the given pos
    int pos, value;
    printf("Enter the index position to insert the element: \n");
    scanf("%d", &pos);
    printf("Enter the value to insert: \n");
    scanf("%d", &value);
    int last = size - 1;
    for (int i = last; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    arr[pos] = value;
    printf("Array after inserting %d at %d: \n", value, pos);
    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]); 
    }
    size++;  // after inserting an element, the size of the array should be increased by 1
    printf("\n");

    // b. inserting above given value at the beginning of the array
    
    last = size - 1;
    for (int i = last; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }
    arr[0] = value;
    printf("Array after inserting %d at the beginning: \n", value);
    for (int i = 0; i <= size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    size++;

    // c. inserting above given value at the end of the array
    last = size - 1;
    arr[last + 1] = value;
    size++;
    printf("Array after inserting %d at the end: \n", value);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // vi. deleting an element from the array

    // a. deleting an element at the given pos

    printf("Enter the index position of the element to delete: \n");
    scanf("%d", &pos);
    last = size - 1;
    for (int i = pos; i < last; i++) {
        arr[i] = arr[i + 1];
    }
    size--;  // after deleting an element, the size of the array should be decreased by 1
    printf("Array after deleting the element at index %d: \n", pos);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // b. deleting an element at the beginning of the array
    last = size - 1;
    for (int i = 0; i < last; i++) {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Array after deleting the element at the beginning: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // c. deleting an element at the end of the array
    size--;
    printf("Array after deleting the element at the end: \n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // vii. sum of all elements in the array
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    printf("Sum of all elements in the array is: %d\n", sum);

    // completing the lab1 prohram..

    return 0;
}
