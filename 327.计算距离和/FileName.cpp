#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

class Solution {
public:
    /**
    * @param a: an integer array
    * @return: an integer array
    */
    vector<long long> getDistanceMetrics(vector<int> &a) {
        // write your code here.
        vector<long long> result = vector<long long>(a.size());
        for (int i = 0; i < a.size(); i++)
        {
            for (int j = i + 1; j < a.size(); j++)
            {
                if (a[i] == a[j])
                {
                    result[i] += abs(i - j);
                    result[j] += abs(i - j);
                }
            }
        }
        return result;
    }
};