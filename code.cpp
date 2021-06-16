traverse the tree by level order and Map the value
if the tree has one value in it then size of map is one return true else false

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    map<int,int>A;
    bool isUnivalTree(TreeNode* root) {
        queue<TreeNode *>B;
        B.push(root);
        while(!B.empty())
        {
            TreeNode *current=B.front();
            A[current->val]++;
            B.pop();
            if(current->left)B.push(current->left);
            if(current->right)B.push(current->right);
        }
        return A.size()==1?1:0;
    }
};
