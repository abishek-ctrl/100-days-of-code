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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res;
        if(!root) return res;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> v;
            int sz=q.size();
            while(sz--){
                TreeNode* f=q.front();
                v.push_back(q.front()->val);
                q.pop();
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            res.push_back(v);            
        }
        reverse(res.begin(),res.end());
        return res;
    }
};