#include<bits/stdc++.h>
using namespace std;

// Brute Force Approach
// create all subarrays
// TC : O(N^2) || SC : O(1)
int main(){
    vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
    int maxSum = INT_MIN;
    for(int i = 0; i < nums.size(); i++){
        int sum = 0;
        for(int j = i; j < nums.size(); j++){
            sum += nums[j];
            maxSum = max(maxSum, sum);
        }
    }
    cout << "Maximum Sum : " << maxSum;

    return 0;
}