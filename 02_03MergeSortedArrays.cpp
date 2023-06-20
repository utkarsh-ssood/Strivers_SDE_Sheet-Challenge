// 02-Arrays
// 02_03 -->Merge Two Sorted Arrays

// You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

// Merge nums1 and nums2 into a single array sorted in non-decreasing order.

// The final sorted array should not be returned by the function, but instead be stored inside the array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    void swapifGreater(vector<int> &arr1, vector<int> &arr2, int i1, int i2)
    {
        swap(arr1[i1], arr2[i2]);
    }
    void merge(vector<int> &arr1, int n1, vector<int> &arr2, int n2)
    {
        int len = n1 + n2;
        for (int i = arr1.size() - 1; i >= n1; i--)
        {
            arr1.pop_back();
        }
        int gap = (len / 2) + len % 2;
        while (gap > 0)
        {
            int left = 0, right = left + gap;
            while (right < len)
            {
                if (left < n1 && right >= n1)
                {
                    swapifGreater(arr1, arr2, left, right - n2);
                }
                else if (left >= n1)
                {
                    swapifGreater(arr1, arr2, left - n1, right - n1);
                }
                else
                {
                    swapifGreater(arr1, arr1, left, right);
                }
                left++;
                right++;
            }
            if (gap == 1)
                break;
            gap = gap / 2 + gap % 2;
        }
        for (int i = 0; i < arr2.size(); i++)
        {
            arr1.push_back(arr2[i]);
        }
    }
};

int main()
{

    return 0;
}