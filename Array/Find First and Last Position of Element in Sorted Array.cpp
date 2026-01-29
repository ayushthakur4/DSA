#include <iostream>
using namespace std;

int firstOccurance(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;        // store index
            end = mid - 1;    // move left
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int lastOccurance(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int ans = -1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == key) {
            ans = mid;        // store index
            start = mid + 1;  // move right
        }
        else if (arr[mid] < key) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int size = 6;
    int target = 8;

    int first = firstOccurance(nums, size, target);
    int last  = lastOccurance(nums, size, target);

    cout << "[" << first << ", " << last << "]";

    return 0;
}
