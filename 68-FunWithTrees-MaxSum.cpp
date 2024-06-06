// 68 - Fun With Trees - Max Sum (CodeWars Exercise)

/*
You are given a binary tree. Implement a function that returns the maximum sum of a route from root to leaf.

For example, given the following tree:

    17
   /  \
  3   -10
 /    /  \
2    16   1
         /
        13
The function should return 23, since 17 -> -10 -> 16 is the route from root to leaf with the maximum sum.

Return 0 if the tree is empty.
*/

class TreeNode
{
public:
    TreeNode* left;
    TreeNode* right;
    int value;
};

static int maxSum(TreeNode* root)
{
    if (!root) return 0;
    
    if (root->left && root->right)
    {
        return root->value + std::max(maxSum(root->left), maxSum(root->right));
    }
    else if (!root->left && !root->right)
    {
        return root->value;
    }
    else if (!root->left)
    {
        return root->value + maxSum(root->right);
    }
    
    return root->value + maxSum(root->left);
}
