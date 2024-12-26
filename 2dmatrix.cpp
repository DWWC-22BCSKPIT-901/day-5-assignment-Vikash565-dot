#include <bits/stdc++.h>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();
    int left = 0, right = m * n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int midElement = matrix[mid / n][mid % n];
        if (midElement == target) {
            return true;
        } else if (midElement < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return false;
}

int main() {
    int m, n, target;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements of the matrix row by row: ";
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter the target number: ";
    cin >> target;

    if (searchMatrix(matrix, target)) {
        cout << "Target found in the matrix.\n";
    } else {
        cout << "Target not found in the matrix.\n";
    }

    return 0;
}
