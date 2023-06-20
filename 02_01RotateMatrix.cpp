// 02-Arrays
// 02_01 -->Rotate Matrix

// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

#include <iostream>
#include<vector>
#include<vector>
using namespace std;

class Solution
{
public:
    void rotate(vector<vector<int>> &arr)
    {
        int n = arr.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (i != j)
                {
                    swap(arr[i][j], arr[j][i]);
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n / 2; j++)
            {
                swap(arr[i][j], arr[i][n - j - 1]);
            }
        }
    }
};

int main()
{

    return 0;
}