// 01 Array
// 01.01-->Set matrix zeroes

// Question->Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.
// You must do it in place.

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        // vector<int>rows(m,0);
        // vector<int>columns(n,0);
        int col = 1;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col = 0;
                }
            }
        }
        for (int i = 1; i < m; i++)
        {
            if (matrix[i][0] == 0)
            {
                for (int j = 1; j < n; j++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        for (int j = 1; j < n; j++)
        {
            if (matrix[0][j] == 0)
            {
                for (int i = 1; i < m; i++)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        if (matrix[0][0] == 0)
        {
            for (int i = 0; i < n; i++)
            {
                matrix[0][i] = 0;
            }
        }
        if (col == 0)
        {
            for (int i = 0; i < m; i++)
            {
                matrix[i][0] = 0;
            }
        }
    }
};


int main()
{

    return 0;
}
