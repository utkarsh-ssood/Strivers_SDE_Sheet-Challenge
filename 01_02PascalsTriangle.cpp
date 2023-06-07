// 01-Arrays
// 01_02 --> Pascals Triangle

// Question- Given an integer numRows, return the first numRows of Pascal's triangle.

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<vector<int>> generate(int numRows)
    {
        vector<vector<int>> pa;
        pa.push_back({1});
        if (numRows == 1)
        {
            return pa;
        }
        pa.push_back({1, 1});
        if (numRows == 2)
        {
            return pa;
        }
        int t = 1, k = 2;
        while (k < numRows)
        {
            vector<int> temp;
            temp.push_back(1);
            for (int i = 1; i < pa[t].size(); i++)
            {
                temp.push_back(pa[t][i] + pa[t][i - 1]);
            }
            temp.push_back(1);
            pa.push_back(temp);
            t++;
            k++;
        }
        return pa;
    }
};

int main()
{

    return 0;
}
