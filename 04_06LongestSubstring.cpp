// 04-Arrays
// 04_06 --> Longest Substring Without Repeating Characters

// Given a string s, find the length of the longest substring without repeating characters.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int lengthOfLongestSubstring(string arr)
    {
        unordered_set<int> us;
        if (arr.length() == 0)
        {
            return 0;
        }
        int l = 0, res = INT_MIN;
        for (int r = 0; r < arr.length(); r++)
        {
            if (us.find(arr[r]) != us.end())
            {
                while (l < r && us.find(arr[r]) != us.end())
                {
                    us.erase(arr[l]);
                    l++;
                }
            }
            us.insert(arr[r]);
            res = max(res, r - l + 1);
        }
        return res;
    }
};

int main()
{

    return 0;
}