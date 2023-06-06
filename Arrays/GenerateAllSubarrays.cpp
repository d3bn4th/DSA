#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Generate All Subarrays
    vector<vector<int>> subArrays;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            vector<int> v;
            for(int k = i; k<=j; k++){
                v.push_back(arr[k]);
            }
            subArrays.push_back(v);
        }
    }
    for(auto it : subArrays){
        for(auto it2 : it){
            cout << it2 << " ";
        }
        cout << endl;
    }

    return 0;
}