#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution {
public:
    /**
    * @param n: a number
    * @return: Gray code
    */
    vector<int> grayCode(int n) {
        // write your code here
        int windowLength = 0;
        int max = pow(2, n);
        vector<int> res = vector<int>();
        res.push_back(0);
        bool isOrder = true;
        while (windowLength <= n)
        {
            windowLength++;
            int curNum = 1;
            for (int i = 0; i < n - windowLength + 1; i++)
            {
                res.push_back(curNum << 1);
            }
        }
    }
};

int main()
{
    Solution s = Solution();
    
}