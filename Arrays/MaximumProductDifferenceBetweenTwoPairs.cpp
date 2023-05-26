#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {5,6,2,7,4};
    sort(nums.begin(), nums.end());
    int ans = nums[nums.size()-1]*nums[nums.size()-2] - nums[0]*nums[1];
    cout << ans;

    return 0;
}