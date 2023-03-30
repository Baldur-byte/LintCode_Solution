#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

class Solution {
public:
    /**
    * @param n: An integer
    * @return: a square matrix
    */
    vector<vector<int>> generateMatrix(int n) {
        // write your code here
        vector<vector<int>> result(n, vector<int>(n, 0));
        int row = 0, column = 0;
        int curNum = 1;
        int turnRow = 1;
        int turnColumn = 1;
        bool isRow = false;
        int circle = 1;
        while (curNum <= n * n)
        {
            result[row][column] = curNum;
            curNum++;
            if (isRow)
            {
                if (row + turnRow > n - 1 - (circle / 4) || row + turnRow < (circle / 4))
                {
                    isRow = !isRow;
                    turnRow = -turnRow;
                    circle++;
                    column += turnColumn;
                }
                else
                {
                    row += turnRow;
                }
            }
            else
            {
                if (column + turnColumn > n - 1 - (circle / 4) || column + turnColumn < (circle / 4))
                {
                    isRow = !isRow;
                    turnColumn = -turnColumn;
                    circle++;
                    row += turnRow;
                }
                else
                {
                    column += turnColumn;
                }
            }
        }
        return result;
    }
};

int main()
{
    Solution s = Solution();
    int n = 1;
    cin >> n;
    vector<vector<int>> res = s.generateMatrix(n);
    cout << "[" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "\t[";
        for (int j = 0; j < n; j++)
        {
            if (j == n - 1)
            {
                cout << " " << setw(2) << res[i][j] << " ";
            }
            else
            {
                cout << " " << setw(2) << res[i][j] << ", ";
            }
        }
        if (i == n - 1)
        {
            cout << " ]" << endl;
        }
        else
        {
            cout << " ]," << endl;
        }
    }
    cout << "]" << endl;
    return 0;
}