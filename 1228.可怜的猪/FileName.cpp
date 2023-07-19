#include <iostream>

using namespace std;

class Solution {
public:
    /**
    * @param buckets: an integer
    * @param minutesToDie: an integer
    * @param minutesToTest: an integer
    * @return: how many pigs you need to figure out the "poison" bucket within p minutes 
    */
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        // Write your code here
        int pigsPerTime = buckets / ( minutesToTest / minutesToDie );
        //int count
    }
};

int main()
{
    Solution s = Solution();
    cout << s.poorPigs(1000, 15, 60) << endl;
}