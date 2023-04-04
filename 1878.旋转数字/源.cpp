#include <iostream>
#include <math.h>

using namespace std;

class Solution {
public:
    /**
    * @param n: length of good nums
    * @return: The num of good nums of length n
    */
    long long rotatedNums(int n) {
        // write your code here
        if (n == 1)
        {
            return 5;
        }
        else if (n == 2)
        {
            return 6;
        }
        int count = n / 2 - 1;
        long long res;
        if (n % 2 == 1)
        {
            res = 30l;
        }
        else
        {
            res = 6l;
        }
        res = res * powl(7, count);
        return res;
    }
};

int main()
{
    Solution s = Solution();
    int num;
    cin >> num;
    cout << s.rotatedNums(num) << endl;
    return 0;
}