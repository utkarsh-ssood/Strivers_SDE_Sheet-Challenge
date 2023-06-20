// 03-Arrays
// 03_02 -->Pow(x,n)

// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    double myPow(double x, int n)
    {
        long long nn = n;
        if (n == 0)
            return 1;
        if (n == 1)
            return x;
        double ans = 1.0;
        if (nn < 0)
        {
            nn = -nn;
        }
        while (nn)
        {
            if (nn % 2 == 0)
            {
                x = x * x;
                nn = nn / 2;
            }
            else
            {
                nn = nn - 1;
                ans = ans * x;
            }
        }
        if (n < 0)
            ans = (double)1.0 / ans;
        return ans;
    }
};

int main()
{

    return 0;
}
