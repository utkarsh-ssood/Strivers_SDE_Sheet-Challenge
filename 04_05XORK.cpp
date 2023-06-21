// 04-Arrays
// 04_05 -->Count the number of subarrays with given xor K

// Problem Statement: Given an array of integers A and an integer B. Find the total number of subarrays having bitwise XOR of all elements equal to k.


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int subarraysXor(vector<int> &arr, int k)
{
    unordered_map<int, int> m;
    int curr = 0, count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        curr ^= arr[i];
        if (curr == k)
            count++;
        count += m[curr ^ k];
        m[curr]++;
    }
    return count;
}

int main()
{

    return 0;
}