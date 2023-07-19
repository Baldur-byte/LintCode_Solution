#include <iostream>

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
    * @param root: the root of binary tree
    * @return: the length of the longest consecutive sequence path
    */
    int longestConsecutive2(TreeNode *root) {
        // write your code here

    }
};