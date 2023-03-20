#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    /**
     * @param start: a point [x, y]
     * @param target: a point [x, y]
     * @return: return True and False
     */
    bool reachingPointsII(vector<int>& start, vector<int>& target)
    {
        if (start[0] > target[0] || start[1] > target[1])
        {
            return false;
        }
        if (start[0] == target[0] && start[1] == target[1])
        {
            return true;
        }
        if (start[0] + start[1] <= target[1])
        {
            start[1] = start[0] + start[1];
            return reachingPointsII(start, target);
        }
        else if (start[0] + start[1] <= target[0])
        {
            start[0] = start[0] + start[1];
            return reachingPointsII(start, target);
        }
        return false;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> start = { 2,3 };
    vector<int> target = { 100,500 };
    cout << (s.reachingPointsII(start, target) ? "True" : "False") << endl;
}