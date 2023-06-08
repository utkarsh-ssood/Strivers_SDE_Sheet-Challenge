// 01-Arrays
// 01_04 -->Kadane's Algorithm

// // Question- Given an integer array nums, find the subarray with the largest sum, and return its sum.

#include <iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution
{
public:
    int maxSubArray(vector<int> &arr)
    {
        int maxi = INT_MIN, sum = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            if (sum > maxi)
            {
                maxi = sum;
            }
            if (sum < 0)
            {
                sum = 0;
            }
        }
        // if(maxi<0) return 0;
        return maxi;
    }
};


// // 2nd Version
// class Solution
// {
// public:
//     int maxSubArray(vector<int> &arr)
//     {
//         int res = arr[0];
//         for (int i = 1; i < arr.size(); i++)
//         {
//             if (arr[i] + arr[i - 1] > arr[i])
//             {
//                 arr[i] = arr[i] + arr[i - 1];
//             }
//             res = max(arr[i], res);
//         }
//         return res;
//     }
// };


int main()
{

    return 0;
}