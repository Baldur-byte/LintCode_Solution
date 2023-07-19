#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
    * @param answers: some subset of rabbits (possibly all of them) tell 
    * @return: the minimum number of rabbits that could be in the forest.
    */
    int numRabbits(vector<int> &answers) {
        // write your code here
        int result = 0;
        int nums[1000] = {0};
        for (int i = 0; i < answers.size(); i++)
        {
            if (nums[answers[i] + 1] == 0)
            {
                result += answers[i] + 1;
                nums[answers[i] + 1] = answers[i];
            }
            else
            {
                nums[answers[i] + 1]--;
            }
        }
        return result;
    }
};

int main()
{
    vector<int> answers = { 10,10,10 };
    Solution s = Solution();
    cout << s.numRabbits(answers);
}