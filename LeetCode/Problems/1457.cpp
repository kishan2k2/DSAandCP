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
    // Take two length of the tree and the no of common elements, and using both find the number of common element.
    void solve(TreeNode* root, map<int, int> & mapping, int len, int common, int & ans){
        if(!root)
            return ;
        // if(root->val==5)
        //     cout<<mapping[root->val]<<endl;
        if(!mapping[root->val]){
            len++;
        }
        else{
            if(mapping[root->val]%2){
                len--;
            }
            else
                len++;
        }
        mapping[root->val]++;
        if(!root->left && !root->right){
            cout<<"The len value is "<<len<<endl;
            if(len==1 ||len==0){
                ans++;
                cout<<"answer is "<<ans<<endl;
                cout<<"The answer is ending at "<<root->val<<endl;
            }
        }
        solve(root->left, mapping, len, common, ans);
        solve(root->right, mapping, len, common, ans);
        mapping[root->val]--;
        if(mapping[root->val] == 0)
            len--;
    }
public:
    int pseudoPalindromicPaths (TreeNode* root) {
        map<int, int> mapping;
        int len = 0, common = 1, ans = 0;
        solve(root, mapping, len, common, ans);
        return ans;
    }
};