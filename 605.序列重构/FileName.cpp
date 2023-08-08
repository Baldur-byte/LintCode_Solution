#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
    * @param org: a permutation of the integers from 1 to n
    * @param seqs: a list of sequences
    * @return: true if it can be reconstructed only one or false
    */
    bool sequenceReconstruction(vector<int> &org, vector<vector<int>> &seqs) {
        // write your code here
        indegree = new int[10000];

    }
private:
    vector<vector<int>> adj;    //邻接表
    int* indegree;              //记录每个顶点的入度
    void addEdge(int v, int w)
    {

    }
};