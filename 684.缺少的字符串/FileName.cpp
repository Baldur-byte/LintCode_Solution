#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

class Solution {
public:
    /**
    * @param str1: a given string
    * @param str2: another given string
    * @return: An array of missing string
    */
    vector<string> missingString(string &str1, string &str2) {
        // Write your code here
        vector<string> result;
        set<string> str_set;
        str1 += " ";
        str2 += " ";
        for (int i = 0, pre = 0; i < str2.size(); i++)
        {
            if (str2[i] == ' ')
            {
                str_set.insert(str2.substr(pre, i - pre));
                pre = i + 1;
            }
        }
        for (int i = 0, pre = 0; i < str1.size(); i++)
        {
            if (str1[i] == ' ')
            {
                string str = str1.substr(pre, i - pre);
                if (str_set.find(str) == str_set.end())
                {
                    result.push_back(str);
                }
                pre = i + 1;
            }
        }
        return result;
    }
};