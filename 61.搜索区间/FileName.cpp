#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
    * @param a: an integer sorted array
    * @param target: an integer to be inserted
    * @return: a list of length 2, [index1, index2]
    */
    vector<int> searchRange(vector<int> &a, int target) {
        // write your code here
        int len = a.size();
        int begin = 0;
        int end = len - 1;
        vector<int> res = { -1,-1 };
        for (int i = 0; i <= len / 2; i++)
        {
            if (a[begin] > target || a[end] < target)
            {
                break;
            }
            if (a[begin] == target)
            {
                res[0] = begin;
            }
            else
            {
                begin++;
            }
            if (a[end] == target)
            {
                res[1] = end;
            }
            else
            {
                end--;
            }
            if (res[0] != -1 && res[1] != -1)
            {
                break;
            }
        }
        return res;
    }
};