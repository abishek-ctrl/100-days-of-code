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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(!root) return res;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            bool isFirst=true;
            while(n>0){
                TreeNode* temp=q.front();
                q.pop();
                if(isFirst){
                    res.push_back(temp->val);
                    isFirst=false;
                }
                if(temp->right)
                    q.push(temp->right);
                if(temp->left)
                    q.push(temp->left);
                    n--;
            }
        }
        return res;
    }
};