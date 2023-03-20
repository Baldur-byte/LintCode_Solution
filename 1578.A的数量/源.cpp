#include <iostream>
#include <string>

using namespace std;

class Solution
{
public:
    /**
     * @param s: the given string
     * @return: the number of A
     */
    int countA(string& s)
    {
        int len = s.size();
        //找到最后一个B和最先一个C或D的位置
        int begin = 0;
        int end = s.size() - 1;
        int mid = (begin + end) / 2;
        
        return len;
    }

    int getLen(string& s, int begin, int end)
    {
        int mid = (begin + end) / 2;
        if (s[begin] == 'A')
        {
            if (s[end] == 'A')
            {
                return end - begin + 1;
            }
        }
        else if (s[begin] == 'C' || s[begin] == 'D')
        {
            return 0;
        }
        else
        {
            if (s[end] == 'B')
            {
                return 0;
            }
            else if (s[end] == 'A')
            {
                if (s[mid] == 'A')
                {
                    return getLen(s, begin, mid) + getLen(s, mid, end);
                }
                else
                {
                    return getLen(s, mid, end);
                }
            }
            else
            {
                if (s[mid] == 'A')
                {
                    return getLen(s, begin, mid) + getLen(s, mid, end);
                }
                else if (s[mid] == 'C' || s[mid] == 'D')
                {
                    return getLen(s, begin, mid);
                }
                {
                    return getLen(s, mid, end);
                }
            }
        }
    }
};