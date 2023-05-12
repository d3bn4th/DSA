#include<bits/stdc++.h>
using namespace std;

bool isSorted(vector<int>& nums, int start, int end){
        if(start > end){
            return true;
        }
        for(int i = start+1; i < end; i++){
            if(nums[i] >= nums[i-1]){
                continue;
            }
            else{
                return false;
            }
        }
        return true;
    }
bool check(vector<int>& nums) {
    int max_index = 0;
    int max = INT_MIN;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        if(nums[i] >= max){
            max = nums[i];
            max_index = i;
        }
    }

    bool res1 = isSorted(nums,0,max_index);
    bool res2 = isSorted(nums,max_index+1,n);
    if(res1 == 1 && res2 == 1){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    vector<int> nums = {3,4,5,1,2}; // true
    vector<int> nums = {2,1,3,4}; // false
    if(check(nums)){
        cout << "Sorted and Rotated";
    }
    else{
        cout << "Not Sorted and Rotated";
    }

    return 0;
}