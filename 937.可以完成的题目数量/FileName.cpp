#include <iostream>

using namespace std;

class Solution {
public:
    /**
    * @param n: an integer
    * @param k: an integer
    * @return: how many problem can you accept
    */
    long long canAccept(long long n, int k) {
        // Write your code here
        long long result = 0;
        long long sum = 0;
        while (k * sum < n)
        {
            result++;
            sum = result * ( 1 + result ) / 2;
        }
        return --result;
    }
};

int main()
{
    Solution s = Solution();
    cout << s.canAccept(31, 2);
}