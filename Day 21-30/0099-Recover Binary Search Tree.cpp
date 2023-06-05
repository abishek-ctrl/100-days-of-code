class Solution {
public:
    void recoverTree(TreeNode* root) {
        TreeNode *prev=nullptr,*start=nullptr, *end=nullptr;
        inorder(root,prev,start,end);
        swap(start->val,end->val);
    }
    void inorder(TreeNode* root, TreeNode* &prev, TreeNode* &start, TreeNode* &end ){
        if(root==NULL) return;
        inorder(root->left,prev,start,end);
        if(prev!=NULL){
            if(root->val<prev->val){
                if(start==NULL){
                    start=prev;
                }
                end=root;
            }
        }
        prev=root;
        inorder(root->right,prev,start,end);         
    }
};
