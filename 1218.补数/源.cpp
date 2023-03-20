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
        int i = 0, bin[MAX], temp = num, bit = 1;
        int res = 0;
        while (temp != 1)
        {
            res += (1 - (temp % 2)) * bit;
            bit *= 2;
            temp /= 2;
            i++;
        }

        return res;
    }
};

int main() {
    Solution s = Solution();
    cout << s.findComplement(5) << endl;
}