// 02-Arrays
// 02_05 -->Find the repeating and missing numbers

// Problem Statement: You are given a read-only array of N integers with values also in the range [1, N] both inclusive. Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    long long sum = 0, sumofsq = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        sumofsq += (long long)arr[i] * arr[i];
    }
    long long k1 = n * (n + 1) / 2 - sum;
    long long k2 = (long long)n * (n + 1) * (2 * n + 1) / 6 - sumofsq;
    // pair<int,int>p;
    int x = (k2 / k1 + k1) / 2;
    int y = x - k1;
    pair<int, int> p;
    p = {x, y};
    return p;
}

int main()
{

    return 0;
}