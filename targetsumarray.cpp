#include <bits/stdc++.h>
using namespace std;

vector<int> targetIndices(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
        if (nums[i] == target) {
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    int n, target;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << "Enter the target number: ";
    cin >> target;

    vector<int> indices = targetIndices(nums, target);
    if (!indices.empty()) {
        cout << "Target indices: ";
        for (int index : indices) {
            cout << index << " ";
        }
        cout << "\n";
    } else {
        cout << "No target indices found.\n";
    }

    return 0;
}
