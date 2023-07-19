#include <iostream>

using namespace std;

class Solution {
public:
    /**
    * @param num: An integer
    * @return: An integer, the number of ones in num
    */
    int countOnes(int num) {
        // write your code here
        int count = 0;
        while (num != 0)
        {
            num = num & ( num - 1 );
            count++;
        }
        return count;
    }
};