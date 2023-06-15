class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        if(n == 1){
            if(nums[0] == target) return 0;
            else return -1;
        }
        int low = 0;
        int high = n-1;
        int mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(nums[mid] == target){
                return mid;
            }
            if(nums[mid] >= nums[low]){
                // low - mid is sorted
                if(target >= nums[low] && target <=nums[mid]){
                    high = mid - 1;
                } 
                else{
                    low = mid + 1;
                }
            }
            else {
                // mid - high is sorted
                if(target > nums[mid] && target <=nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};