/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
private:
int BinarySearch(MountainArray mountainArr, int target, int s, int e) {
    while (s <= e) {
        int mid = (s + e) / 2;
        if(mid == 0){
            mid += 1;
        }
        else if(mid == mountainArr.length()-1){
            mid -= 1;
        }
        int curr = mountainArr.get(mid);
        if (curr > mountainArr.get(mid - 1) && curr > mountainArr.get(mid + 1))
            return mid;
        else if (curr > mountainArr.get(mid + 1))
            e = mid - 1;
        else
            s = mid + 1;
    }
    return -1;
}

int Binary1(MountainArray mountainArr, int target, int s, int e) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        int curr = mountainArr.get(mid);
        if (curr == target) {
            return mid;
        }
        if (curr>target) {
            e = mid - 1;
        } else {
            s = mid + 1;
        }
    }
    return -1;
}

int Binary2(MountainArray mountainArr, int target, int s, int e) {
    while (s <= e) {
        int mid = s + (e - s) / 2;
        int curr = mountainArr.get(mid);
        if (curr == target) {
            return mid;
        }
        if (target < curr)
            s = mid + 1;
        else
            e = mid - 1;
    }
    return -1;
}


public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int size = mountainArr.length();
        int peak = BinarySearch(mountainArr, target, 0, size-1);
        cout<<peak<<' ';
        int one = Binary1(mountainArr, target, 0, peak);
        int two = Binary2(mountainArr, target, peak, size-1);
        if(one!=-1)
            return one;
        else if(two!=-1)
            return two;
        else
            return -1;
    }
};