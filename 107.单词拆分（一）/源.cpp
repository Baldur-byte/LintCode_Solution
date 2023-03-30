#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    /**
    * @param s: A string
    * @param wordSet: A dictionary of words dict
    * @return: A boolean
    */
    bool wordBreak(string &s, unordered_set<string> &wordSet) {
        // write your code here
        unordered_set<string>::iterator preIt = wordSet.begin();
        unordered_set<string>::iterator lastIt = wordSet.begin();
    }
};