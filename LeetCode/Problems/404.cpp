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
    void solve(TreeNode* root, int& sum, char dir){
        if(!root->left && !root->right) {
            if(dir == 'L')
                sum += root->val;
            return ;
        }
        if(root->left)
            solve(root->left, sum, 'L');
        if(root->right)
            solve(root->right, sum, 'R');
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        char dir = 'N';
        solve(root, sum, dir);
        return sum;
    }
};