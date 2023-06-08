class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // // TC : O(nlogn) || SC : O(1) 
        // sort(nums.begin(), nums.end());
        // return nums[nums.size()/2];
        
        // Moore's Voting Algorithm
        int ele = nums[0];
        int cnt = 0;
        for(int i = 0; i < nums.size(); i++){
            if(ele == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }

            if(cnt == 0){
                ele = nums[i];
                cnt = 1;
            }
        }
        // checking if the ele is majority or not
        // don't need this if, its given in the question that 
        // majority element always exists
        cnt = 0;
        for(auto it : nums){
            if(it == ele){
                cnt++;
            }
        }
        if(cnt > nums.size()/2){
            return ele;
        }
        return -1;



    }
};