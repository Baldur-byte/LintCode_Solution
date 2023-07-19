#include <iostream>
#include <vector>
#include <string>
#include <math.h>
#include <stdio.h>

using namespace std;

class Solution {
public:
    /**
    * @param n: a decimal number
    * @param k: a Integer represent base-k
    * @return: a base-k number
    */
    string hexConversion(int n, int k) {
        // write your code here
        if (n == 0)
        {
            return "0";
        }
        string result = "";
        while (n > 0)
        {
            int num = n % k;
            char c = ' ';
            if (num > 9)
            {
                c = 'A' + ( num - 10 );
            }
            else
            {
                c = '0' + num;
            }
            result = c + result;
            n /= k;
        }
        return result;
    }
};

int main()
{
    Solution s = Solution();
    int n = 256;
    int k = 2;
    cout << s.hexConversion(n, k) << endl;
    return 0;
}