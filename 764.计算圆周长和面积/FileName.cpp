#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution {
public:
    /**
    * @param r: a Integer represent radius
    * @return: the circle's circumference nums[0] and area nums[1]
    */
    vector<double> calculate(int r) {
        vector<double> res = vector<double>();
        res.push_back((double)3.14 * r * 2);
        res.push_back((double)3.14 * r * r);
        return res;
    }
};

int main()
{
    Solution s = Solution();
    cout << s.calculate(2)[0] << endl;
    cout << s.calculate(2)[1] << endl;
}