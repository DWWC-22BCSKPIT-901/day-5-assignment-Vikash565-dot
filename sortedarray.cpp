#include <bits/stdc++.h>
using namespace std;

bool isPresent(int k, vector<int>& arr) {
    int low = 0, high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k) {
            return true;
        } else if (arr[mid] < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return false;
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array (sorted in ascending order): ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> k;

    if (isPresent(k, arr)) {
        cout << k << " is present in the array.\n";
    } else {
        cout << k << " is not present in the array.\n";
    }

    return 0;
}
