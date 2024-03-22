// 26 - Array to Tree (CodeWars Exercise)

// Worst Case Time Complexity: O(n) where n is the size of the input vector
// Worst Case Space Complexity: O(n) since we have to construct n TreeNodes

#include <vector>

class TreeNode 
{
  public:
    int value;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int value, TreeNode* left = nullptr, TreeNode* right = nullptr)
        : value{ value }, left{ left }, right{ right } {}
};

// This function takes in an array of ints and returns the root of a newly constructed tree representing its contents
// This is achieved through two steps. The first is creating the data, the second is assigning its relationships.

// An alternative approach would be to construct the tree with a double ended queue as an in between container, 
// instead of interating through it twice.

TreeNode* array_to_tree(const std::vector<int>& arr) 
{
    if (arr.empty()) return nullptr;
  
    std::vector<TreeNode*> nodes;

    // Create an array of tree nodes
    for (int num : arr)
    {
      TreeNode* node = new TreeNode(num);
      nodes.push_back(node);
    }
  
    // Iterate over tree nodes 
    for (size_t index = 0; index < nodes.size(); ++index)
    {
      size_t leftChildIndex = index * 2 + 1;
      size_t rightChildIndex = index * 2 + 2;
      
      // If it has a left child, assign it
      if (leftChildIndex < nodes.size())
      {
        nodes[index]->left = nodes[leftChildIndex];
      }
      
      // If it has a right child, assign it
      if (rightChildIndex < nodes.size())
      {
        nodes[index]->right = nodes[rightChildIndex];
      }
    }
  
    return nodes[0];
}