#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {3,1,-2,-5,2,-4};
    for(int i = 1; i < nums.size()-1; i++){
        if(nums[i] < 0 && nums[i + 1] < 0 && nums[i-1] > 0){
            swap(nums[i], nums[i -1]);
        }
    }
    for(auto it : nums){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}