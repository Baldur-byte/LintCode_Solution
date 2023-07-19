#include <iostream>
#include <math.h>

using namespace std;

class Solution {
public:
    /**
    * @param n: an integer
    * @return: the total number of digit 1
    */
    int countDigitOne(int n)
    {
        int count = 0;
        while (n > 10)
        {
            int num = n % 10;
            n /= 10;
        }
    }

    int doCount(int n)
    {
        if (n == 0)
        {
            return 0;
        }
        else if (n == 10)
        {
            return 1;
        }
        else
        {
            int count = pow(n, 0.1);
            int num = pow(10, count);
            return 1 + 9 * doCount(n / 10);
        }
    }
};

int main()
{
    Solution s = Solution();
    int n;
    cin >> n;
    cout << s.doCount(n) << endl;
    return 0;
}