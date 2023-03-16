#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    /**
     * @param nums: an array
     * @return: if it could become non-decreasing by modifying at most 1 element
     */
    bool checkPossibility(vector<int>& nums)
    {
        int length = nums.size(), count = 0;
        for (int i = 1; i < length; i++)
        {
            if (nums[i] < nums[i - 1])
            {
                count++;
                if (i > 1 && nums[i] < nums[i - 2])
                {
                    nums[i] = nums[i - 1];
                }
            }
        }
        return count < 2;
    }
private:
    int Main()
    {
        return 0;
    }
};