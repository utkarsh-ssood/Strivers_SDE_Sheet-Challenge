// 01-Arrays
// 01_03 -->Next Permutation 

// // Question- A permutation of an array of integers is an arrangement of its members into a sequence or linear order.

// For example, for arr = [1,2,3], the following are all the permutations of arr: [1,2,3], [1,3,2], [2, 1, 3], [2, 3, 1], [3,1,2], [3,2,1].
// The next permutation of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the next permutation of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

// For example, the next permutation of arr = [1,2,3] is [1,3,2].
// Similarly, the next permutation of arr = [2,3,1] is [3,1,2].
// While the next permutation of arr = [3,2,1] is [1,2,3] because [3,2,1] does not have a lexicographical larger rearrangement.
// Given an array of integers nums, find the next permutation of nums.

// The replacement must be in place and use only constant extra memory.


#include <iostream>
#include <vector>
using namespace std;

void reverse(vector<int> &arr, int i)
{
    int j = arr.size() - 1;
    while (i < j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

class Solution
{
public:
    void nextPermutation(vector<int> &arr)
    {
        int n = arr.size();
        int i, j;
        for (i = n - 2; i >= 0; i--)
        {
            if (arr[i] < arr[i + 1])
            {
                break;
            }
        }
        if (i == -1)
        {
            reverse(arr, 0);
            return;
        }
        for (j = n - 1; j > i; j--)
        {
            if (arr[j] > arr[i])
            {
                swap(arr[i], arr[j]);
                break;
            }
        }
        reverse(arr, i + 1);
    }
};

int main()
{

    return 0;
}