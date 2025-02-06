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
    bool A(TreeNode* p,TreeNode* q){
        if (p==NULL && q==NULL) return true;
        if (p == NULL || q == NULL) return false; 
        if (p->val != q->val) return false; 
        return A(p->left ,q->right) && A(p->right,q->left);
    }
public:
    bool isSymmetric(TreeNode* root) {
        if (root == NULL) return true; 
        return A(root->left, root->right);
    }
};