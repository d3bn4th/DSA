class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        map<int,int> sumMap;
        for(int i = 1; i < nums.size(); i++){
            int sum = nums[i] + nums[i-1];
            if(sumMap.find(sum) != sumMap.end()){
                return true;
            }
            sumMap[sum]++;
        } 
        return false;
    }
};