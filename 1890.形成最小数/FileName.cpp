#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /**
    * @param str: the pattern
    * @return: the minimum number
    */
    string formMinimumNumber(string &str) {
        // Write your code here.
        vector<int> res = vector<int>(str.size() + 1);
        int curnum = 2;
        int last = 0;
        res[0] = 1;
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] == 'I')
            {
                res[i + 1] = curnum;
                last = i + 1;
            }
            else if (str[i] == 'D')
            {
                for (int j = last; j < i + 1; j++)
                {
                    res[j] += 1;
                }
                res[i + 1] = res[i] - 1;
            }
            curnum++;
        }
        string res_s = "";
        for (int i = 0; i < res.size(); i++)
        {
            res_s.append(to_string(res[i]));
        }
        return res_s;
    }
};

int main()
{
    Solution s = Solution();
    string str = "DDIDDIID";
    cout << s.formMinimumNumber(str) << endl;
}