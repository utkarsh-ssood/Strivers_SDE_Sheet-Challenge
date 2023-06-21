// 04-Arrays
// 04_03 --> Longest Consecutive Sequence

// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.

// You must write an algorithm that runs in O(n) time.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &arr)
    {
        set<int> us(arr.begin(), arr.end());
        int res = 0;
        for (auto x : us)
        {

            if (us.find(x - 1) == us.end())
            {

                int count = 1;
                while (us.find(x + count) != us.end())
                {
                    count++;
                }
                res = max(res, count);
            }
        }
        return res;
    }
};

int main()
{

    return 0;
}