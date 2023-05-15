#include<bits/stdc++.h>
using namespace std;

// Merge Two Sorted Arrays

// 1. Two pointer Approach with Dummy array
//  TC -> O(m+n)
//  SC -> O(m+n) 
// int main(){
//     vector<int> nums1 = {1,2,3,0,0,0};
//     int m = 3;
//     vector<int> nums2 = {2,5,6}; 
//     int n = 3;
//     vector<int> ans;
//     int i = 0;
//     int j = 0;
//     while(i < m && j < n){
//         if(nums1[i] <= nums2[j]){
//             ans.push_back(nums1[i]);
//             i++;
//         }
//         else {
//             ans.push_back(nums2[j]);
//             j++;
//         }
//     }
//     while(i < m){
//         ans.push_back(nums1[i]);
//         i++;
//     }
//     while(j < n){
//         ans.push_back(nums2[j]);
//         j++;
//     }
//     int index = 0;
//     for(auto it : ans){
//         nums1[index] = it;
//         index++;
//     }

//     for(auto it : nums1){
//         cout << it << " ";
//     }
//     return 0;
// }


// 2. Two pointer without using extra array

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6}; 
    int n = 3;
    int ptr1 = m-1;
    int ptr2 = n-1;
    int ptr3 = n + m -1;
    while(ptr1 >= 0 && ptr2 >= 0){
        if(nums1[ptr1] > nums2[ptr2]){
            nums1[ptr3] = nums1[ptr1];
            ptr3--;
            ptr1--;
        }
        else if(nums1[ptr1] < nums2[ptr2]){
            nums1[ptr3] = nums2[ptr2];
            ptr3--;
            ptr2--;
        }
        else{ // when both are equal
            nums1[ptr3] = nums1[ptr1];
            ptr3--;
            nums1[ptr3] = nums2[ptr2];
            ptr3--;
            ptr1--;
            ptr2--;
        }
    }
    while(ptr2 >= 0){
        nums1[ptr3] = nums2[ptr2];
        ptr3--;
        ptr2--;
    }
    for(auto it : nums1){
        cout << it << " ";
    }
     
}