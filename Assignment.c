//Algorithm Find_Maximum(A, n)
   // Input: Array A of size n
   // Output: Maximum element in the array

// Set max = A[0]  // Assume the first element is the maximum
// For i = 1 to n-1 do
// If A[i] > max then
// Set max = A[i]
// Return max

#include <stdio.h>

int find_maximum(int arr[], int n) {
    //  Assumming the first element is the largest
    int max = arr[0];

    //  Traverse the array starting from the second element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if the current element is larger
        }
    }

   
    return max;    // Return the maximum element
}

int main() {
    int arr[] = {12, 45, 7, 89, 23, 54}; // array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculates number of elements

    // Call the function and print the maximum element
    int max_element = find_maximum(arr, n);
    printf("The maximum element in the array is: %d\n", max_element);

    return 0;
}