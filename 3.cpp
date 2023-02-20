#include <iostream>

double median(int *arr, int size) {
    double median_value;

    if (size % 2 == 0) {
        // if the size is even, take the average of the two middle values
        median_value = (*(arr + (size / 2) - 1) + *(arr + (size / 2))) / 2.0;
    } else {
        // if the size is odd, take the middle value
        median_value = *(arr + (size / 2));
    }

    return median_value;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    std::cout << "Median of the array: " << median(arr, size) << std::endl;

    return 0;
}
