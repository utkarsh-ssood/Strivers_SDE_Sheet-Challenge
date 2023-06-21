// 04-Arrays
// 04_01 -->2 Sum

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{
public:
    vector<int> twoSum(vector<int> &arr, int k)
    {
        vector<int> temp;
        for (int i = 0; i < arr.size(); i++)
        {
            temp.push_back(arr[i]);
        }
        sort(temp.begin(), temp.end());
        int n = arr.size();
        int i = 0, j = n - 1, num1 = 0, num2 = 0;
        while (i < j)
        {
            if (temp[i] + temp[j] > k)
            {
                j--;
            }
            else if (temp[i] + temp[j] < k)
            {
                i++;
            }
            else
            {
                num1 = temp[i];
                num2 = temp[j];
                break;
            }
        }
        vector<int> res;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (count < 2)
                if (num1 == arr[i] || num2 == arr[i])
                {
                    count++;
                    res.push_back(i);
                }
                else
                {
                    break;
                }
        }
        return res;
    }
};
int main()
{

    return 0;
}