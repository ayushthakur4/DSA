#include <iostream>
#include <climits>
using namespace std;

int getMin(int num[], int n) {
    int mini = INT_MAX;

    for (int i = 0; i < n; i++) {
        if (num[i] < mini) {
            mini = num[i];
        }
    }
    return mini;
}

int main() {
    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    int minimum = getMin(num, size);
    cout << "Minimum value is: " << minimum << endl;

    return 0;
}
