// 02-Arrays
// 02_06 -->Count inversions in an array

// Problem Statement: Given an array of N integers, count the inversion of the array (using merge-sort).

// What is an inversion of an array? Definition: for all i & j < size of array, if i < j then you have to find pair (A[i],A[j]) such that A[j] < A[i].

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long _mergeSort(long long arr[], int temp[], int left, int right);
long long merge(long long arr[], int temp[], int left, int mid,
                int right);

long long mergeSort(long long arr[], int array_size)
{
    int temp[array_size];
    return _mergeSort(arr, temp, 0, array_size - 1);
}

long long _mergeSort(long long arr[], int temp[], int left, int right)
{
    long long inv_count = 0;
    int mid;
    if (right > left)
    {
        mid = (right + left) / 2;

        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        inv_count += merge(arr, temp, left, mid + 1, right);
    }
    return inv_count;
}

long long merge(long long arr[], int temp[], int left, int mid,
                int right)
{
    int i, j, k;
    long long inv_count = 0;

    i = left;
    j = mid;
    k = left;
    while ((i <= mid - 1) && (j <= right))
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];

            inv_count = inv_count + (mid - i);
        }
    }

    while (i <= mid - 1)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left; i <= right; i++)
        arr[i] = temp[i];

    return inv_count;
}

long long getInversions(long long *arr, int n)
{
    return mergeSort(arr, n);
}

int main()
{

    return 0;
}