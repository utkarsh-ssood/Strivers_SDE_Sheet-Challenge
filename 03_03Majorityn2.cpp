// 03-Arrays
// 03_03 -->MajorityElement(n/2Times)

// Given an array nums of size n, return the majority element.
// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int majorityElement(vector<int> &arr)
    {
        int count = 0, ele = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (count == 0)
            {
                ele = arr[i];
                count = 1;
            }
            else
            {
                if (arr[i] == ele)
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
        }
        count = 0;
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == ele)
            {
                count++;
            }
        }
        if (count > arr.size() / 2)
        {
            return ele;
        }
        return -1;
    }
};

int main()
{

    return 0;
}