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
    void leafNodes(TreeNode* root,vector<int>& leaf){
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            leaf.push_back(root->val);
        }
        leafNodes(root->left,leaf);
        leafNodes(root->right,leaf);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leaf1,leaf2;
        leafNodes(root1,leaf1);
        leafNodes(root2,leaf2);
        return leaf1==leaf2;
    }
};
