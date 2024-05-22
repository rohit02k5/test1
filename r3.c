#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int start, int end) {
    while (start < end) {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}

void nextPermutation(int arr[], int n) {
    int i = n - 2;

    // Find the rightmost element which is smaller than its next element
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    // If such element is not found, the array is already sorted, reverse it
    if (i == -1) {
        reverse(arr, 0, n - 1);
        return;
    }

    // Find the smallest element to the
