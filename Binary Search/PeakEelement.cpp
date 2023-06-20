#include<bits/stdc++.h>
using namespace std;

// int findPeak(vector<int> nums){
//     int n = nums.size();
//     if(n == 1) return 0;
//     if(nums[0] > nums[1]) return 0;
//     if(nums[n-1] > nums[n-2]) return n-1;
//     for(int i = 1; i < n-1; i++){
//         if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
//             return i;
//         }
//     }
//     return -1;
// }
int findPeak(vector<int> nums){
    int n = nums.size();
    if(n == 1) return 0;
    if(nums[0] > nums[1]) return 0;
    if(nums[n-1] > nums[n-2]) return n-1;
    // Binary Search
    int low = 0;
    int high = n -1;
    int mid;
    while(low <= high){
        mid = low + (high - low)/2;
        if(nums[mid] > nums[mid + 1] && nums[mid] > nums[mid-1]){
            return mid;
        }
        if(nums[mid] < nums[mid + 1]){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    // vector<int> nums = {1,2,3,1};
    // vector<int> nums = {1,2};
    vector<int> nums = {1};
    // vector<int> nums = {1,1,1,1};
    int peak_index = findPeak(nums);
    cout << "Peak Element index : " << peak_index << endl;
    return 0;
}