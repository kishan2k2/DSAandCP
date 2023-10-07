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
    TreeNode* find(TreeNode* start, TreeNode* compare){
        while(start->right && start->right!=compare){
            start = start->right;
        }
        return start;
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* curr = root;
        vector<int> ret;
        while(curr){
            if(!curr->left){
                ret.push_back(curr->val);
                curr = curr->right;
            }
            else{
                TreeNode* predecessor = curr -> left;
                while (predecessor -> right && predecessor -> right != curr) //second condition used when reverting
                    predecessor = predecessor -> right;
                
                if ((predecessor -> right)==NULL) 
                {
                    predecessor -> right = curr;
                    curr = curr -> left; //ifb) Go to this left child
                }
                else 
                {
                    //Revert back the changes
                    predecessor -> right = NULL;
                    ret.push_back(curr -> val);
                    curr = curr -> right;
                }
            }
        }
        return ret;
    }
};