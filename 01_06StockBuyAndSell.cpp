// 01-Arrays
// 01_06 --> Best Time to Buy and Sell Stock

// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &nums)
    {
        int profit = 0, minm_buying = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] - minm_buying > 0)
                profit = max(profit, nums[i] - minm_buying);
            minm_buying = min(minm_buying, nums[i]);
        }
        if (profit <= 0)
            return 0;
        return profit;
    }
};

int main()
{

    return 0;
}