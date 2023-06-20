// 03-Arrays
// 03_01 -->Search a 2D Matrix

// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target, return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &arr, int x)
    {
        int n = arr.size(), m = arr[0].size();
        if (!n)
            return false;
        int low = 0, high = m * n - 1;
        while (low <= high)
        {
            int middle = (low + high) / 2;

            if (arr[middle / m][middle % m] == x)
            {
                return true;
            }
            else if (arr[middle / m][middle % m] < x)
            {
                low = middle + 1;
            }
            else if (arr[middle / m][middle % m] > x)
            {
                high = middle - 1;
            }
        }
        return false;
    }
};

int main()
{

    return 0;
}