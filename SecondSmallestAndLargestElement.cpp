#include<bits/stdc++.h>
using namespace std;


// 1. Sort Array O(NLogN + N)

// int main(){
//     vector<int> arr = {1,2,4,7,7,5};
//     // vector<int> arr = {1};
//     int n = arr.size();
//     if(n >=2){
//         sort(arr.begin(), arr.end());
//         if(arr[0] == arr[1]){
//             int i = 1;
//             while(arr[i] == arr[0] && (i <= arr.size()-1)){ 
//                 i++;
//             }
//             if(i == 0 && arr[i] == arr[0]){
//                 cout << -1 << endl;
//             }
//             else{
//                 cout << arr[i] << " ";
//             }
//         }
//         else{
//             cout << arr[1] << " ";
//         }
//         if(arr[arr.size()-1] == arr[arr.size()-2]){
//             int i = arr.size()-2;
//             while(arr[i] == arr[arr.size()-1] && (i > 0)){ 
//                 i--;
//             }
//             if(i == 0 && arr[i] == arr[arr.size()-1]){
//                 cout << -1 << endl;
//             }
//             else{
//                 cout << arr[i] << endl;
//             }
//         }
//         else{
//             cout <<arr[arr.size()-1]; 
//         }
//     }
//     else {
//         cout << -1 << " " << -1 << endl;
//     }
//     return 0;
// }


// -------------------------------------------------------------------------------------
//  2. Better Solution 
//      find max and min then find second max and min
//      O(N + N) == O(2N)
// int main() {
//     vector<int> arr = {1,2,4,6,7,5};
//     int t; cin >> t;
//     int n = arr.size();
//     int max = INT_MIN;
//     int min = INT_MAX;
//     for(int i = 0; i < n; i++){
//         if(arr[i] > max){
//             max = arr[i];
//         }

//         if(arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     // to find the second smallest
//     int s_max = INT_MIN;
//     int s_min = INT_MAX;
//     for(int i = 0; i < n; i++){
//         if(arr[i] > s_max && arr[i] < max){
//             s_max = arr[i];
//         }

//         if(arr[i] < s_min && arr[i] > min){
//             s_min = arr[i];
//         }
//     }
//     cout << "Minimmum : "<< min << " " << "Maximum : " << max << endl;
//     cout << "Second Minimmum : "<< s_min << " " << "Second Maximum : " << s_max << endl;

// }


// -------------------------------------------------------------------------------------
//  3. Optimal Solution 
//    
//      O(N)

int secondSmallest(vector<int>& vec){
    int min = INT_MAX;
    int s_min = INT_MAX;
    int n = vec.size();
    if(n < 2){
        return -1;
    }
    for(int i = 0; i < n; i++){
        if(vec[i] < min){
            s_min = min;
            min = vec[i];
        }
        else if(vec[i] < s_min && vec[i] != min){
            s_min = vec[i];
        }
    }
    return s_min;
}
int secondLargest(vector<int>& vec){
    int max = INT_MIN;
    int s_max = INT_MIN;
    int  n = vec.size();
    if(n < 2){
        return -1;
    }
    for(int i = 0; i < n; i++){
        if(vec[i] > max){
            s_max = max;
            max = vec[i]; 
        }
        else if(vec[i] > s_max && vec[i] != max){
            s_max = vec[i];
        }
    }
    return s_max;
}

int main(){
    vector<int> vec = {6, 2, 3, 2, 1, 0, 5, 7 , 3};
    cout << secondLargest(vec) << " " << secondSmallest(vec) << endl;

    return 0;
}