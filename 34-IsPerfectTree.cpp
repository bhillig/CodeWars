// 34 - Fun with trees: Is Perfect (CodeWars Exercise)

/*
A perfect binary tree is a binary tree in which all interior nodes have two children 
and all leaves have the same depth or same level.

You are given a class called TreeNode. Implement the method isPerfect which determines 
if a given tree denoted by its root node is perfect.
*/

#include <algorithm>

class TreeNode
{
public:
    // Takes in a tree node and returns the height 
    static int getHeight(TreeNode* root)
    {
        if (!root) return 0;
        
        return 1 + std::max(getHeight(root->left), getHeight(root->right));
    }

    // Main function - returns whether the tree given is balanced
    static bool isPerfect(TreeNode* root)
    {
        if (!root) return true;
        
        if (getHeight(root->left) != getHeight(root->right)) return false;
        
        return isPerfect(root->left) && isPerfect(root->right);
    }
    
    static TreeNode* leaf() 
    {
        return new TreeNode();
    }
    
private:
    TreeNode* left;
    TreeNode* right;
    
    TreeNode()
        : left(NULL), right(NULL)
    {
    } 
};