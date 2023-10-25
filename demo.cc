#include <iostream>

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Loop through the array to find and remove duplicates
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                // Remove the duplicate element by shifting all elements left
                for (int k = j; k < n - 1; ++k) {
                    arr[k] = arr[k + 1];
                }
                n--;  // Decrease the size of the array
            } else {
                j++;  // Move to the next element
            }
        }
    }

    // Print the resulting array with no duplicates
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
