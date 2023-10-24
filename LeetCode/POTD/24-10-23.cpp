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
    // Do breath first search with a little twist to find the max of the elements of the stack.
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int> v;
        if(!root)
            return v;
        // v.push_back(root->val);
        queue<TreeNode*> s;
        s.push(root);
        while(!s.empty()){
            int size = s.size();
            int maxi = INT_MIN;
            while(size-- && !s.empty()){
                TreeNode* temp = s.front();
                // v.push_back(temp->val);
                maxi = max(maxi, temp->val);
                cout<<temp->val<<"->";
                s.pop();
                if(temp->left)
                    s.push(temp->left);
                if(temp->right)
                    s.push(temp->right);
            }
            // if(maxi!=INT_MIN){
            v.push_back(maxi);
        }
        return v;
    }
};