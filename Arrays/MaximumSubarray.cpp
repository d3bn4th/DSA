#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
// create all subarrays
// TC : O(N^2) || SC : O(1)
// int main(){
//     vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
//     int maxSum = INT_MIN;
//     for(int i = 0; i < nums.size(); i++){
//         int sum = 0;
//         for(int j = i; j < nums.size(); j++){
//             sum += nums[j];
//             maxSum = max(maxSum, sum);
//         }
//     }
//     cout << "Maximum Sum : " << maxSum;

//     return 0;
// }

// Optimal Approach
// Kadane's Algorithm
int main(){
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = arr[0];
    int maxSum = INT_MIN;
    for(int i = 1; i < n; i++){
        if(sum + arr[i] >= arr[i]){
            sum+=arr[i];
        }
        else{
            sum = arr[i];
        }
        maxSum = max(maxSum, sum);
    }
    cout << maxSum << endl;

    return 0;
}