class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int lo = 0;
        int hi = n-1;
        while(lo <= hi){
            int mid = (lo + hi)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] > target){
                hi = mid - 1;
            }
            if(nums[mid] < target){
                lo = mid + 1;
            }
        }
        // lo = hi + 1
        // return (a[lo] - val) < (val-a[hi])?lo:hi;
        return lo;
    }
};