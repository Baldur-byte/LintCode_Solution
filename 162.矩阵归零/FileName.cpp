#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
    * @param matrix: A lsit of lists of integers
    * @return: nothing
    */
    void setZeroes(vector<vector<int>> &matrix) {
        // write your code here
        vector<int> row = vector<int>();
        vector<int> column = vector<int>();
        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    if (find(row.begin(), row.end(), i) == row.end())
                    {
                        row.push_back(i);
                    }
                    if (find(column.begin(), column.end(), j) == column.end())
                    {
                        column.push_back(j);
                    }
                }
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (find(row.begin(), row.end(), i) != row.end() || find(column.begin(), column.end(), j) != column.end())
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};