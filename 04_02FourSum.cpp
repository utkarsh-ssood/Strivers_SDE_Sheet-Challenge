// 04-Arrays
// 04_02 -->4 Sum

// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:

// 0 <= a, b, c, d < n
// a, b, c, and d are distinct.
// nums[a] + nums[b] + nums[c] + nums[d] == target

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &arr, int target)
    {
        int n = arr.size();
        vector<vector<int>> res;
        sort(arr.begin(), arr.end());
        for (int i = 0; i < n; i++)
        {
            if (i > 0 && arr[i] == arr[i - 1])
                continue;
            for (int j = i + 1; j < n; j++)
            {
                if (j > i + 1 && arr[j] == arr[j - 1])
                    continue;
                long long d = (long long)target - arr[i] - arr[j];
                int k = j + 1, l = n - 1;
                while (k < l)
                {
                    if (k > j + 1 && arr[k] == arr[k - 1])
                    {
                        k++;
                    }
                    else if (l < n - 1 && arr[l] == arr[l + 1])
                    {
                        l--;
                    }
                    else if (arr[k] + arr[l] < d)
                    {
                        k++;
                    }
                    else if (arr[k] + arr[l] > d)
                    {
                        l--;
                    }
                    else
                    {
                        vector<int> temp = {arr[i], arr[j], arr[k], arr[l]};
                        res.push_back(temp);
                        k++;
                        l--;
                    }
                }
            }
        }

        return res;
    }
};

int main()
{

    return 0;
}