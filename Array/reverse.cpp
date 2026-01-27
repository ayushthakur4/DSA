#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[6] = {1, 2, 3, 4, 5, 6};

    cout << "Original arr: ";
    printArray(arr, 5);

    cout << "Original brr: ";
    printArray(brr, 6);

    reverseArray(arr, 5);
    reverseArray(brr, 6);

    cout << "Reversed arr: ";
    printArray(arr, 5);

    cout << "Reversed brr: ";
    printArray(brr, 6);

    return 0;
}
