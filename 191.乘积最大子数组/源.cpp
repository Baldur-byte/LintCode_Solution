#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
    * @param nums: An array of integers
    * @return: An integer
    */
    int maxProduct(vector<int> &nums) {
        // write your code here
        if (nums.size() == 1)
        {
            return nums[0];
        }
        int cur = 0;
        vector<int>::iterator it = nums.begin();
        vector<vector<int>> chapter = vector<vector<int>>();
        vector<int> section = vector<int>();
        for (it; it != nums.end(); it++)
        {
            if (( *it ) == 0 || it == nums.end() - 1)
            {
                if (cur != 0)
                {
                    section.push_back(cur);
                }
                chapter.push_back(section);
                section = vector<int>();
                cur = 0;
            }
            else if (( *it ) < 0)
            {
                if (cur != 0)
                {
                    section.push_back(cur);
                }
                section.push_back(*it);
                cur = 0;
            }
            else
            {
                if (cur == 0)
                {
                    cur = *it;
                }
                else
                {
                    cur *= *it;
                }
            }
        }

        if (chapter.size() == 0)
        {
            return 0;
        }

        vector<vector<int>>::iterator iter = chapter.begin();

        int max = ( *chapter.begin() )[0];

        for (iter = chapter.begin(); iter != chapter.end(); iter++)
        {
            int cur = 1;
            for (it = ( *iter ).begin(); it != ( *iter ).end(); it++)
            {
                if (cur > max)
                {
                    max = cur;
                }
            }
        }

        return max;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> nums = { 2, 3, -2, 4 };
    cout << s.maxProduct(nums) << endl;
    return 0;
}