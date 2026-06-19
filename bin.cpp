#include <iostream>
using namespace std;

int main() {
    int n, target;
    cout << "Enter Size of the array : ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements => ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Array => ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nEnter target value : ";
    cin >> target;

    int low = 0, high = n - 1;
    bool found = false;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == target) {
            found = true;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found)
        cout << "Element found !";
    else
        cout << "Element not found";

    return 0;
}