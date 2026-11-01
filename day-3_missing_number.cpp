
#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum = sum + arr[i];
    }

    int total = n * (n + 1) / 2;
    cout << "Missing number: " << total - sum;

    return 0;
}
