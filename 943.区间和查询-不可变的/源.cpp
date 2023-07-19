#include <iostream>
#include <vector>

using namespace std;

class NumArray {
public:
    vector<int> results;
    NumArray(vector<int> nums) {
        results.push_back(0);
        for (int i = 0; i < nums.size(); i++)
        {
            results.push_back(results.back() + nums[i]);
        }
    }
    int sumRange(int i, int j) {
        return results[j + 1] - results[i];
    }
};

/**
* Your NumArray object will be instantiated and called as such:
* NumArray obj = new NumArray(nums);
* int param_1 = obj.sumRange(i,j);
*/