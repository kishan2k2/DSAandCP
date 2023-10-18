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
    // Using recursion.
    // Base case-: when Both the childs are empty push back the string in the vector.
    // if left is not null traverse left, and vice versa for right as well.
    void solve(TreeNode* root, vector<string>& output, string str){
        if(!root->left && !root->right){
            str += to_string(root->val);
            output.push_back(str);
            return ;
        }
        str += to_string(root->val) + "->";
        cout<<str<<" ";
        if(root->left)
            solve(root->left, output, str);
        if(root->right)
            solve(root->right, output, str);
    }
public:
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> output;
        solve(root, output, "");
        return output;
    }
};