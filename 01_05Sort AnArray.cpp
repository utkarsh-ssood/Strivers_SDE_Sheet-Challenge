// 01-Arrays
// 01_05 -->Sort Colors

// Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

// You must solve this problem without using the library's sort function.

#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

class Solution
{
public:
    void sortColors(vector<int> &arr)
    {
        int n = arr.size();
        int low = 0, mid = 0, high = n - 1;
        while (mid <= high)
        {
            if (arr[mid] == 0)
            {
                swap(arr[low], arr[mid]);
                low++;
                mid++;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else if (arr[mid] == 2)
            {
                swap(arr[mid], arr[high]);
                high--;
            }
        }
    }
};

int main()
{

    return 0;
}