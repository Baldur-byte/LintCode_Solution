#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
    * @param a: an array
    * @return: the maximum value of F(0), F(1), ..., F(n-1)
    */
    int maxRotateFunction(vector<int> &a) {
        // Write your code here
        int aum = 0;
        for (int i = 0; i < a.size(); i++)
        {
            aum += a[i];
        }
        int sum = 0;
        for (int i = 0; i < a.size(); i++)
        {
            sum += a[i] * i;
        }
        int result = sum;
        for (int i = a.size() - 1; i > 0; i--)
        {
            sum = sum + aum - a.size() * a[i];
            if (sum > result)
            {
                result = sum;
            }
        }
        return result;
    }
};

int main()
{
    vector<int> a = { 4,3,2,6 };
    Solution s = Solution();
    cout << s.maxRotateFunction(a);
}