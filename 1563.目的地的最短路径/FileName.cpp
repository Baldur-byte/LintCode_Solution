#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    /**
    * @param targetMap: 
    * @return: nothing
    */
    const int EMPTY = 0;
    const int BLOCK = 1;
    const int END = 2;
    const int VISITED = 3;

    int shortestPath(vector<vector<int>> &targetMap) {
        // Write your code here
        int row = targetMap.size();
        int column = targetMap[0].size();

        int result = 0;

        pair<int, int> curPos;
        queue<pair<int, int>> path;
        path.push({ 0, 0 });

        int posX = 0, posY = 0;

        int directionX[4] = {-1, 0, 0, 1};
        int directionY[4] = {0, -1, 1, 0};

        while (!path.empty())
        {
            result++;
            int len = path.size();
            for (int i = 0; i < len; i++)
            {
                curPos = path.front();
                path.pop();
                for (int j = 0; j < 4; j++)
                {
                    posX = curPos.first + directionX[j];
                    posY = curPos.second + directionY[j];
                    if (posX < 0 || posX >= row || posY < 0 || posY >= column || targetMap[posX][posY] == BLOCK || targetMap[posX][posY] == VISITED)
                    {
                        continue;
                    }
                    if (targetMap[posX][posY] == END)
                    {
                        return result;
                    }
                    path.push({ posX, posY });
                    targetMap[posX][posY] = VISITED;
                }
            }
        }
        return -1;
    }
};