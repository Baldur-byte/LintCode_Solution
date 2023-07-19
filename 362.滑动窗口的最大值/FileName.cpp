#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
    * @param nums: A list of integers.
    * @param k: An integer
    * @return: The maximum number inside the window at each moving.
    */
    vector<int> maxSlidingWindow(vector<int> &nums, int k) {
        // write your code here
        vector<int> result = vector<int>();
        if (k > nums.size())
        {
            k = nums.size();
        }
        int maxIndex = -1;
        int maxNum = 0;
        for (int i = 0; i < nums.size() - k + 1; i++)
        {
            if (maxIndex <= i)
            {
                maxIndex = i;
                maxNum = nums[i];
                for (int j = i + 1; j < i + k; j++)
                {
                    if (nums[j] > maxIndex)
                    {
                        maxIndex = j;
                        maxNum = nums[j];
                    }
                }
            }
            else
            {
                if (nums[i + k - 1] > maxIndex)
                {
                    maxIndex = i + k - 1;
                    maxNum = nums[i + k - 1];
                }
            }
            result.push_back(maxNum);
        }
        return result;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> nums = { 1,2,3 };
    int k = 5;
    vector<int> result = s.maxSlidingWindow(nums, k);
    cout << "[";
    for (int i = 0; i < result.size(); i++)
    {
        if (i == result.size() - 1)
        {
            cout << result[i];
        }
        else
        {
            cout << result[i] << ", ";
        }
    }
    cout << "]" << endl;
}