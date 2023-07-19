#include <iostream>

using namespace std;

class Solution {
public:
    /**
    * @param s: A string containing only uppercase and lowercase letters
    * @return: Judge whether it can become a palindrome
    */
    bool isPalindrome(string &s) {
        // write your code here
        if (s.size() == 1)
        {
            return true;
        }

        int tempSingleChar[256] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            if (tempSingleChar[s[i]] == 1)
            {
                tempSingleChar[s[i]] = 0;
            }
            else
            {
                tempSingleChar[s[i]] = 1;
            }
        }
        int sum = 0;
        for (int i = 0; i < 256; i++)
        {
            sum += tempSingleChar[i];
        }
        return sum <= 1;
    }
};

int main()
{
    Solution s = Solution();
    string str = "aab";
    cout << s.isPalindrome(str) << endl;
}