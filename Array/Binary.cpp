#include<iostream>
using namespace std;

int binarysrc(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            return mid;   // element found
        }
        else if (arr[mid] < key) {
            start = mid + 1;   // search right part
        }
        else {
            end = mid - 1;     // search left part
        }
    }
    return -1;  // element not found
}

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12};
    int n = 6;
    int key = 10;

    int result = binarysrc(arr, n, key);

    if (result != -1)
        cout << "Element found at index: " << result;
    else
        cout << "Element not found";

    return 0;
}
