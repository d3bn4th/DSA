#include<bits/stdc++.h>
using namespace std;

// 1. Brute Force Approach 
// TC -> O(N+N)
// SC -> O(N)
// int main(){
//     vector<int> vec = {1,1,2,2,2,3,3,5,5,5};
//     vector<int> vec2;
//     vec2.push_back(vec[0]);
//     for(int i = 1; i < vec.size(); i++){
//         if(vec[i] == vec[i-1]){
//             continue;
//         }
//         vec2.push_back(vec[i]);
//     }
//     for(auto it : vec2) {
//         cout << it << " ";
//     }
//     return 0;
// }

// 2. Using Set 
// TC -> O(NlogN + N)
// SC -> O(N)

// int main(){
//     vector<int> vec = {1,1,2,2,2,3,3,5,5,5};
//     set<int> st;
//     for(int i = 0; i < vec.size(); i++){
//         st.insert(vec[i]); // set insertion = O(logN)
//     }
//     int i = 0;
//     for(auto it : st){
//         cout << it << " ";
//         vec[i] = it;
//         i++;
//     }
// }

// 3. Two Pointer Approach
// TC -> O(N)
// SC -> O(1)
int main(){
    vector<int> vec = {1,1,2,2,2,3,3,5,5,5,6};
    int index = 1;
    for(int i = 1; i < vec.size(); i++){
        if(vec[i] != vec[i-1]){
            vec[index] = vec[i];
            index++;
        }
    }
    for(int i = 0; i < index; i++){
        cout << vec[i] << endl;
    }
    return 0;
}