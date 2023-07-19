#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
    * @param nums: a list of integers
    * @return: return a integer
    */
    int findShortestSubArray(vector<int> &nums) {
        // write your code here
        vector<int> num = vector<int>(50000);
        for (int i = 0; i < nums.size(); i++)
        {
            ++num[nums[i]];
        }
        int maxLen = 0;
        for (int i = 0; i < num.size(); i++)
        {
            if (num[i] > maxLen)
            {
                maxLen = num[i];
            }
        }

        vector<int> maxNums;
        for (int i = 0; i < num.size(); i++)
        {
            if (num[i] == maxLen)
            {
                maxNums.push_back(i);
            }
        }


    }
};