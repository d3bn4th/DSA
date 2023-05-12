#include<bits/stdc++.h>
using namespace std;


// 1. Using Dummy Array(initialized with 0 of size n) to store the non-zero elements first 
// TC -> O(N)
// SC -> O(N)
// int main(){
//     vector<int> nums = {1,0,2,3,0,4,0,1};
//     int n = nums.size();
//     vector<int> res(n,0);
//     int index = 0;
//     for(int i = 0; i < n; i++){
//         if(nums[i] != 0){
//             res[index] = nums[i];
//             index++;
//         }
//     }
//     for(auto it : nums){
//         cout << it << " ";
//     }
//     cout << endl;
//     for(auto it : res){
//         cout << it  << " ";
//     }
//     return 0;
// }


// 2. Doing the swap in the same array itself
// TC : O(N*N)
// SC : O(1)
// void zeroesToEnd(int arr[], int n) {
//     for(int i = 0; i < n; i++){
//         if(arr[i] == 0){
//             int  j = i+1;
//             while(j < n){
//                 if(arr[j] != 0){
//                     int  temp = arr[i];
//                     arr[i] = arr[j];
//                     arr[j] = temp;
//                     break; 
//                 }
//                 j++;
//             }
//         }
//     }
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int arr[] ={ 1,2,0,1,0,4,0};
//     zeroesToEnd(arr,7);
//     return 0;
// }

// 3. Two Pointer Approach
// TC : O(N) or  O(2N)
// SC : O(1)

int main(){
    // Find the first occurence of Zero
    int nums[7] ={1,2,0,1,0,4,0};
    int n = 7;
    int j;
    for(int i = 0; i < n; i++){
        if(nums[i] == 0){
            j = i;
            break;
        }
    }
    // move the zero barrier alowiung only non zero numbers
    for(int i = j + 1; i < n; i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j = j + 1; // moving j pointer forward to another zero
        }
    }
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

    return 0;
}

