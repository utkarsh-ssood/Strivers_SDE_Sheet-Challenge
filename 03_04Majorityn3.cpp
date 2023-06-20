
// 03-Arrays
// 03_04 -->Majority Element (n/3 Times)

// Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Moores voting algorithm
class Solution
{
public:
    vector<int> majorityElement(vector<int> &arr)
    {
        int ele1 = 0, cnt1 = 0, ele2 = 0, cnt2 = 0;
        int n = arr.size();
        for (int i = 0; i < arr.size(); i++)
        {
            if (cnt1 == 0 && ele2 != arr[i])
            {
                ele1 = arr[i];
                cnt1 = 1;
            }
            else if (cnt2 == 0 && ele1 != arr[i])
            {
                ele2 = arr[i];
                cnt2 = 1;
            }
            else if (arr[i] == ele1)
            {
                cnt1++;
            }
            else if (arr[i] == ele2)
            {
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == ele1)
            {
                cnt1++;
            }
            else if (arr[i] == ele2)
            {
                cnt2++;
            }
        }
        vector<int> res;
        if (cnt1 > n / 3)
        {
            res.push_back(ele1);
        }
        if (cnt2 > n / 3)
        {
            res.push_back(ele2);
        }
        return res;
    }
};

int main()
{

    return 0;
}