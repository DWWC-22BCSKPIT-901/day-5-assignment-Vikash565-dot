#include <bits/stdc++.h>
using namespace std;

int findFirstOccurrence(int k, vector<int>& arr) {
    for (int i = 0; i < arr.size(); ++i) {
        if (arr[i] == k) {
            return i + 1;
        }
    }
    return -1;
}

int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> k;

    int result = findFirstOccurrence(k, arr);
    if (result != -1) {
        cout << "The first occurrence of " << k << " is at position " << result << "\n";
    } else {
        cout << k << " is not present in the array.\n";
    }

    return 0;
}
