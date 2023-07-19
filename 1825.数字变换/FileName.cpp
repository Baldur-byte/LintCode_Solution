#include <iostream>

using namespace std;

class Solution {
public:
    /**
    * @param k: integer k
    * @return: minimum number of operations that change 0 to k
    */
    int numberChange(int k) {
        // write your code here
        int count = 0;
        doChange(k, count);
        return count;
    }
    void doChange(int k, int& count)
    {
        if (k == 0)
        {
            return;
        }
        count++;
        if()
    }
};

int main()
{

}