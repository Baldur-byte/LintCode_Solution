#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
    * @param length: the length of board
    * @param connections: the connections of the positions
    * @return: the minimum steps to reach the end
    */
    int modernLudo(int length, vector<vector<int>> &connections) {
        // Write your code here
        if (length <= 6) return 1;

        int time = 0;
        //vector<int> portal = vector<int>();
        int pos = 0;
        for (int i = 0; i < connections.size(); i++)
        {
            //portal.push_back(connections[i][0]);
            if (connections[i][0] > pos)
            {
                time += ( connections[i][0] - pos + 5 ) / 6 + 1;
                pos = connections[i][1];
            }
        }

        if (length > pos)
        {
            time += ( length - pos + 5 ) / 6;
        }
        //for(int i = 0)
        return time;
    }
};

int main()
{
    Solution s = Solution();
    int length = 0;
    cin >> length;
    vector<vector<int>> connections = { {2, 8},{6, 9} };
    cout << s.modernLudo(length, connections) << endl;
    return 0;
}