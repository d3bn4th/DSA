class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        if(n == 1){
            return nums[0];
        }
        int low = 0;
        int high = n - 1;
        int mid;
        while(low <= high){
            mid = low + (high - low)/2;
            if(mid > 0 && mid < n-1){
                if(nums[mid] < nums[mid -1] && nums[mid] < nums[mid + 1]){
                    return nums[mid];
                }
                else if(nums[mid] > nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            } 
            else if(mid == 0){
                if(nums[mid] < nums[mid + 1]) return nums[mid];
                else return nums[mid + 1];
            }
            else {
                if(nums[mid] < nums[mid - 1]) return nums[mid];
                else return nums[mid - 1];
            }
        }
        return -1;
    }
};