#include <iostream>

int main() {
    // Original array
    int arr1[5] = {1, 4, 7, 10, 15};
    int arr2[5];

    // Pointer to traverse the original array
    int* ptr = arr1;

    // Traverse the array in reverse and store in arr2
    for (int i = 0; i < 5; i++) {
        arr2[i] = *(ptr + 4 - i); // Access elements in reverse order
    }

    // Print the elements of the new array
    std::cout << "New Array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}