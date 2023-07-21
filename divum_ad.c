#include <stdio.h>

void frequencySort(int arr[], int n) {
    // Create an array to store element frequencies
    int freq[100] = {0};

    // Update the frequency count
    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    // Sort the array based on frequency using Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (freq[arr[j]] < freq[arr[j + 1]]) {
                // Swap elements in array
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {1,2,3,2,4,5,5,4,5,6,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    frequencySort(arr, n);

    printf("Array sorted by frequency (decreasing order):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

