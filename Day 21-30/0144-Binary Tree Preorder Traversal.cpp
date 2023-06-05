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
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return {};
        vector<int> res;
        res.push_back(root->val);
        vector<int> le=preorderTraversal(root->left);
        for(auto i:le){
            res.push_back(i);
        }
        vector<int> ri=preorderTraversal(root->right);
        for(auto i:ri){
            res.push_back(i);
        }
        return res;
     }
};