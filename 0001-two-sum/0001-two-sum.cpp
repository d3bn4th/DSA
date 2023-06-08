class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        // Two Pointer Approach
        int i = 0;
        int j = nums.size() - 1;
        vector<pair<int, int>> vp;
        for(int i = 0; i < nums.size(); i++){
            vp.push_back(make_pair(nums[i],i));
        }
        sort(vp.begin(), vp.end());
        while(i <= j){
            int sum = vp[i].first + vp[j].first;
            if(sum == k){
                break;
            }
            else if(sum < k){
                i++;
            }
            else{
                j--;
            }
        }
        return {vp[i].second,vp[j].second};
    }
};