#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    /**
    * @param g: children's greed factor
    * @param s: cookie's size
    * @return: the maximum number
    */
    int findContentChildren(vector<int> &g, vector<int> &s) {
        // Write your code here
        int count = 0;
        int len_g = g.size();
        int len_s = s.size();
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        for (int i = 0, j = 0; i < len_g && j < len_s; j++)
        {
            if (g[i] <= s[j])
            {
                count++;
                i++;
            }
        }
        return count;
    }
};

int main()
{
    Solution s = Solution();
    vector<int> g = { 1,2,3 };
    vector<int> ss = { 1,1 };
    cout << s.findContentChildren(g, ss) << endl;
    return 0;
}