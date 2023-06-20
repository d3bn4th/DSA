#include<bits/stdc++.h>
using namespace std;


// Lower Bound : element with the lowest index which greater than or equal to the target
int my_lower_bound(vector<int> nums, int target){
    int n = nums.size();
    int low = 0 ;
    int high = n - 1;
    int mid;
    int  lb = n; // by default
    while(low <= high){
        mid = low + (high - low)/2;
        if(nums[mid] >= target){
            //this may be the answer so we move left to make sure
            // eliminate mid to high
            // to look for smaller index in the left
            lb = mid;
            high = mid - 1;
        }
        else{ // nums[mid] < target
            // eliminate low to mid;
            // to find element that satisfiest the condition
            low = mid + 1;
        }
    }
    return lb;
}

int my_upper_bound(vector<int> nums, int target){
    int n = nums.size();
    int low = 0;
    int high = n -1;
    int mid;   
    int ub = n;
    while(low  <= high){
        mid = low + (high - low)/2;
        if(nums[mid] > target){
            ub = mid;
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return ub;
}

int main(){
    // vector<int> nums = {2,4,6,8,10,12,14,16};
    vector<int> nums = {5,5,5,6,6,6,7,7};
    auto it_l = lower_bound(nums.begin(), nums.end(), 6);
    auto it_u = upper_bound(nums.begin(), nums.end(), 6);
    cout << it_l - nums.begin() << endl;
    cout << it_u - nums.begin() << endl;
    // cout << it_u - nums.begin();

    cout << my_lower_bound(nums, 6) << endl;
    cout << my_upper_bound(nums, 6) << endl;

    return 0;
}