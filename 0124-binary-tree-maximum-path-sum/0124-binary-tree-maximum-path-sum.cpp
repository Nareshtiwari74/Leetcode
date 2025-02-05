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
int A(TreeNode* node,int& dia){
    if(!node) return 0;
    
    int left=max(0,A(node->left,dia));
    int right=max(0,A(node->right,dia));
    dia=max(dia,left+right+node->val);
    node->left=node->right=NULL;
    return max(left,right)+node->val;
}
    int maxPathSum(TreeNode* root) {
        int dia=INT_MIN;
        return A(root,dia),dia;
    }
};