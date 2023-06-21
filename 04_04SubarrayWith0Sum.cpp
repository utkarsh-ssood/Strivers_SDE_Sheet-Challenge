// 04-Arrays
// 04_04 -->Largest subarray with 0 sum

// Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxLen(vector<int> &arr, int n)
    {
        int sum = 0, res = 0;
        unordered_map<int, int> us;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
            if (sum == 0)
            {
                res = max(res, i + 1);
            }
            if (us.find(sum) != us.end())
            {
                res = max(res, i - us[sum]);
            }
            else
                us.insert({sum, i});
        }
        return res;
    }
};

int main()
{

    return 0;
}