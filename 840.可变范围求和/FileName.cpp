#include <iostream>
#include <vector>

using namespace std;

class NumArray {
public:
    vector<int> nums;
    vector<int> results;
    NumArray(vector<int> nums) {
        this->nums = nums;
        results = vector<int>(nums.size() + 1);
        for (int i = 0; i < nums.size(); i++)
        {
            results[i + 1] = nums[i] + results[i];
        }
    }

    void update(int i, int val) {
        int old = nums[i];
        nums[i] = val;
        int change = val - old;
        for (int j = i + 1; j < results.size(); j++)
        {
            results[j] = results[j] + change;
        }
    }

    int sumRange(int i, int j) {
        return results[j + 1] - results[i];
    }
};

/**
* Your NumArray object will be instantiated and called as such:
* NumArray obj = new NumArray(nums);
* obj.update(i,val);
* int param_2 = obj.sumRange(i,j);
*/