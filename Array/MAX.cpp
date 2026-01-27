#include <iostream>
#include <climits>
using namespace std;

int getMax(int num[], int n) {
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (num[i] > maxi) {
            maxi = num[i];
        }
    }
    return maxi;
}

int main() {
    int size;
    cin >> size;

    int num[100];

    for (int i = 0; i < size; i++) {
        cin >> num[i];
    }

    int maximum = getMax(num, size);
    cout << "Maximum value is: " << maximum << endl;

    return 0;
}
