#include<bits/stdc++.h>
using namespace std;

int myCeil(vector<int> nums,int target){
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int mid;
    int ceil = n;
    while(low <= high){
        mid = (low + high)/2;
        if(nums[mid] >= target){
            ceil = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return nums[ceil];
}

int myFloor(vector<int> nums, int target){
    int floor = -1;
    int n = nums.size();
    int low = 0;
    int high = n - 1;
    int mid;
    while(low <= high){
        mid = (low + high)/2;
        if(nums[mid] > target){
            high = mid - 1;
        }
        else{
            floor = mid;
            low = mid + 1;
        }
    }
    return nums[floor];
}

int main(){

    vector<int> nums = {10,20,30,40,50};
    cout << myCeil(nums, 25) << " ";   
    cout << myFloor(nums, 25);   
    

    return 0;
}