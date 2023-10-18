class Solution {
private:
    TreeNode* call(vector<int>& nums, int s, int e) {
        if (s > e) {
            return nullptr;
        }
        int mid = s + (e - s) / 2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = call(nums, s, mid - 1);
        root->right = call(nums, mid + 1, e);
        return root;
    }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return call(nums, 0, nums.size() - 1);
    }
};
