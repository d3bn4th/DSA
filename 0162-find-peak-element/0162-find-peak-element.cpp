class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int peak = -1;
        int n = nums.size();
        if(n == 1){
            return 0;
            peak = 0;
        }
        if(nums[0] > nums[1]){
            return 0;
        }
        if(nums[n - 1] > nums[n - 2]) {
            return n-1;
        }
        for(int i = 1; i < nums.size()-1; i++){
            if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
                peak = i;
                break;
            }
        }
        return peak;
    }
};