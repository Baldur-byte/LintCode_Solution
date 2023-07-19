#include <iostream>
#include <vector>

using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode* left, * right;
    TreeNode(int val)
    {
        this->val = val;
        this->left = this->right = NULL;
    }
};

class Solution {
public:
    /**
    * @param root: the given BST
    * @param target: the given target
    * @param k: the given k
    * @return: k values in the BST that are closest to the target
    *          we will sort your return value in output
    */
    vector<int> closestKValues(TreeNode *root, double target, int k) {
        // write your code here
    }
};