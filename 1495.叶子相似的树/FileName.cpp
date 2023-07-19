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

class Solution
{
public:
    bool leafSimilar(TreeNode* root1, TreeNode* root2)
    {
        vector<int> leaf1;
        vector<int> leaf2;
        findLeaves(root1, leaf1);
        findLeaves(root2, leaf2);
        return leaf1 == leaf2;
    }

    void findLeaves(TreeNode* node, vector<int>& result)
    {
        if (node == NULL) return;
        if (node->left == NULL && node->right == NULL)
        {
            result.push_back(node->val);
        }
        findLeaves(node->left, result);
        findLeaves(node->right, result);
    }
};