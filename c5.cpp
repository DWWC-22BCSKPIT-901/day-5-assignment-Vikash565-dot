#include <bits/stdc++.h>
using namespace std;

// Helper function to compute GCD
int computeGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

vector<int> sortedGCDPairs(vector<int>& nums, vector<int>& queries) {
    vector<int> gcdPairs;
    int n = nums.size();

    // Compute all GCD pairs
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            gcdPairs.push_back(computeGCD(nums[i], nums[j]));
        }
    }

    // Sort GCD pairs
    sort(gcdPairs.begin(), gcdPairs.end());

    // Answer the queries
    vector<int> answer;
    for (int q : queries) {
        answer.push_back(gcdPairs[q]);
    }
    return answer;
}

int main() {
    // Example input
    vector<int> nums1 = {2, 3, 4};
    vector<int> queries1 = {0, 2, 2};
    vector<int> result1 = sortedGCDPairs(nums1, queries1);

    // Output result for example 1
    for (int x : result1) {
        cout << x << " ";
    }
    cout << endl;

    // Example input 2
    vector<int> nums2 = {4, 4, 2, 1};
    vector<int> queries2 = {5, 3, 1, 0};
    vector<int> result2 = sortedGCDPairs(nums2, queries2);

    // Output result for example 2
    for (int x : result2) {
        cout << x << " ";
    }
    cout << endl;

    // Example input 3
    vector<int> nums3 = {2, 2};
    vector<int> queries3 = {0, 0};
    vector<int> result3 = sortedGCDPairs(nums3, queries3);

    // Output result for example 3
    for (int x : result3) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
