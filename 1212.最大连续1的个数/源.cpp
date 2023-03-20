#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    /**
     * @param nums: a binary array
     * @return:  the maximum number of consecutive 1s
     */
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int maxLen = 0;
        int len = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                if (len > maxLen)
                {
                    maxLen = len;
                }
                len = 0;
            }
            else
            {
                len++;
            }
        }
        return maxLen > len ? maxLen : len;
    }
};

int main()
{
    Solution s = Solution();
    return 0;
}