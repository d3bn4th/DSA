#include<bits/stdc++.h>
using namespace std;

// Linear Search TC : O(N)
/*
vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] == target){
            ans.push_back(i);
        }
    }
    if(ans.size() != 0){
        return ans;
    }
    return {-1,-1};
}
*/
vector<int> searchRange(vector<int>& nums, int target) {
    
}

int main(){
    vector<int> nums = {5,7,7,8,8,10};
    // int target = 6; // {-1, -1}
    int target = 8; // {3, 4}
    vector<int> ans = searchRange(nums, target);
    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}