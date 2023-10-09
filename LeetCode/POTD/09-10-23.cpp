class Solution {
private:
    // Something fishy in this quesiton. Dont know but it is easy, i didn't tried binary search tho.
    // O(Log n) only thing coming to my mind is binary search.
    int binarySearch(vector<int> nums, int target, int left, int right) {

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Found the target at index mid.
        } else if (nums[mid] < target) {
            left = mid + 1; // Search the right half.
        } else {
            right = mid - 1; // Search the left half.
        }
    }

    return -1; // Target not found in the array.
}

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size()-1;
        int j = binarySearch(nums, target, left, right);
        vector<int> arr = {j, j};
        if(j == -1)
            return arr;
        int i = j;
        while(true){
            int J = binarySearch(nums, target, 0, j-1);
            if(J==-1){
                arr[0] = j;
                break;
            }
            else{
                j = J;
            }
        }
        while(true){
            int J = binarySearch(nums, target, i+1, right);
            if(J==-1){
                arr[1] = i;
                break;
            }
            i = J;
        }
        return arr;
    }
};




// Another Approach.
class Solution {
private:
    // Something fishy in this quesiton.
    // O(Log n) only thing coming to my mind is binary search.
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Creating an vector to be returned.
        vector<int> ret = {-1, -1};
        int occurence = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target && occurence == 0){
                ret[0] = i;
            }
            if(nums[i] == target){
                ret[1]= i;
                occurence++;
            }
        }
        return ret;
    }
};



//Another approach 
class Solution {
private:
    // Something fishy in this quesiton. Dont know but it is easy, i didn't tried binary search tho.
    // O(Log n) only thing coming to my mind is binary search.
    int binarySearch(vector<int> nums, int target) {
    int left = 0;
    int right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Found the target at index mid.
        } else if (nums[mid] < target) {
            left = mid + 1; // Search the right half.
        } else {
            right = mid - 1; // Search the left half.
        }
    }

    return -1; // Target not found in the array.
}

public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int j = binarySearch(nums, target);
        vector<int> arr = {j, j};
        int i = 1, k = 1;
        if(j == -1)
            return arr;
        while(i<=j){
            if(nums[j-i]!=nums[j-i+1]){
                break;
            }
            arr[0] = j-i;
            i++;
        }
        while(j+k<nums.size()){
            if(nums[j+k]!=nums[j+k-1])
                break;
            arr[1] = j+k;
            k++;
        }
        return arr;
    }
};