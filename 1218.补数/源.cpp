#include <iostream>
#include <math.h>

#define MAX 32

using namespace std;

class Solution 
{
public:
    Solution(){ }
    /**
     * @param num: an integer
     * @return: the complement number
     */
    int findComplement(int num) {
        // Write your code here
        int bin[16], bit = 1;
        int res = 0;
        while (num != 1)
        {
            res += (1 - (num % 2)) * bit;
            bit *= 2;
            num /= 2;
        }

        return res;
    }
};

int main() {
    Solution s = Solution();
    cout << s.findComplement(5) << endl;
}