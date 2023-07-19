#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    /**
    * @param s: the expression string
    * @return: the answer
    */
    int calculate(string &s) {
        // Write your code here
        stack<int> nums = stack<int>();
        stack<char> operations = stack<char>();
        bool lastIsNum = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 0 && s[i] <= 9)
            {
                if (lastIsNum && !nums.empty())
                {
                    int num = nums.top() * 10 + (int)s[i];
                    nums.pop();
                    nums.push(num);
                }
                else
                {
                    nums.push((int)s[i]);
                }
                lastIsNum = true;
            }
            else if(s[i] != ' ')
            {
                if (s[i] == '+')
                {

                }
                else if (s[i] == '-')
                {

                }
                else if (s[i] == '*')
                {

                }
                else if (s[i] == '/')
                {

                }
                else if (s[i] == '(')
                {

                }
                else if (s[i] == ')')
                {

                }
                lastIsNum = false;
            }
        }
    }
};