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
private:
    void solve(TreeNode* root, int& sum){
        if(!root)
            return ;
        if(root->val%2==0){
            if(root->right){
                if(root->right->right)
                    sum += root->right->right->val;
                if(root->right->left)
                    sum += root->right->left->val;
            }
            if(root->left){
                if(root->left->left)
                    sum += root->left->left->val;
                if(root->left->right)
                    sum += root->left->right->val;
            }
        }
        solve(root->right, sum);
        solve(root->left, sum);
    }
public:
    int sumEvenGrandparent(TreeNode* root) {
        int sum = 0;
        solve(root, sum);
        return sum;
    }
};