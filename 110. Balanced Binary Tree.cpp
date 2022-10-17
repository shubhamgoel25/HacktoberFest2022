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
int hei(TreeNode* root){
    if(!root)
        return 0;
    int a=1+hei(root->left);
    int b=1+hei(root->right);
    if(a==0 || b==0)
        return -1;
    int c=abs(a-b);
    if(c>1)
        return -1;
    
    return max(a,b);
    
}

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        int c=hei(root);
        if(c!=-1)
            return true;
        return false;
    }
};