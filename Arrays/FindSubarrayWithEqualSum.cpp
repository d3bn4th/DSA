#include<bits/stdc++.h>
using namespace std;

void findSubarrays(vector<int>& nums) {
    vector<int> subArraySum;
    for(int i = 0; i < nums.size(); i++){
        int sum = 0;
        for(int j = i; j < nums.size(); j++){
            sum += nums[j];
            subArraySum.push_back(sum);
        }
    }
    sort(subArraySum.begin(), subArraySum.end());
    for(auto it : subArraySum){
        cout << it << " ";
    }
    // for(int i = 1; i < subArraySum.size(); i++){
    //     if(subArraySum[i] == subArraySum[i-1]){
    //         return true;
    //     }
    // }
    // return false;
}

int main(){
    vector<int> nums = {1,2,3,4,5};
    findSubarrays(nums);
    return 0;
}