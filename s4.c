#include <stdio.h>

// Function to perform bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j+1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to perform binary search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return mid;

        if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1; // Key not found
}

int main() {
    int n;

    // Input the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];

    // Input the numbers
    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sort the numbers using bubble sort
    bubbleSort(numbers, n);

    // Open a file to write the sorted numbers
    FILE *file = fopen("sorted_numbers.txt", "w");

    if (file == NULL) {
        printf("Error opening the file for writing.\n");
        return 1; // Exit the program with an error code
    }

    // Write the sorted numbers to the file
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d\n", numbers[i]);
    }

    // Close the file
    fclose(file);

    // Input a number to search in the sorted list
    int searchKey;
    printf("Enter a number to search: ");
    scanf("%d", &searchKey);

    // Perform binary search
    int result = binarySearch(numbers, 0, n - 1, searchKey);

    // Display the result
    if (result != -1) {
        printf("Number %d found at index %d in the sorted list.\n", searchKey, result);
    } else {
        printf("Number %d not found in the sorted list.\n", searchKey);
    }

    return 0;
}
