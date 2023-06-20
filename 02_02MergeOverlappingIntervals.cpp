// 02-Arrays
// 02_02 -->Merge Intervals

// Given an array of intervals where intervals[i] = [starti, endi], merge all overlapping intervals, and return an array of the non-overlapping intervals that cover all the intervals in the input.

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool fun(vector<int> &a, vector<int> &b)
{
    return a[0] < b[0];
}

class Solution
{
public:
    vector<vector<int>> merge(vector<vector<int>> &arr)
    {
        //    vector<vector<int>>res;
        if (arr.size() == 0 || arr.size() == 1)
            return arr;
        int k = 0, count = 0;
        sort(arr.begin(), arr.end(), fun);
        for (int i = 1; i < arr.size(); i++)
        {
            if (arr[i][0] <= arr[k][1])
            {
                count++;
                arr[k][1] = max(arr[i][1], arr[k][1]);
                //    res[k][0]=min(arr[i][0],res[k][0]);
            }
            else
            {
                k++;
                arr[k] = arr[i];
            }
        }
        for (int i = 0; i < count; i++)
        {
            arr.pop_back();
        }
        return arr;
    }
};

int main()
{

    return 0;
}
