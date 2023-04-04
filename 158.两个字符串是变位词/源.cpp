#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    /**
    * @param s: The first string
    * @param t: The second string
    * @return: true or false
    */
    bool anagram(string &s, string &t) {
        // write your code here
        if (s.size() != t.size())
        {
            return false;
        }
        int set_s[256] = { 0 }, set_t[256] = { 0 };
        for (int i = 0; i < s.size(); i++)
        {
            set_s[s[i]]++;
            set_t[t[i]]++;
        }
        for (int i = 0; i < 256; i++)
        {
            if (set_s[i] != set_t[i])
            {
                return false;
            }
        }
        return true;
    }
};