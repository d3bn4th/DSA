#include<iostream>
#include<vector>
#include<array>
using namespace std;

int main(){
    // converting array to xored array
    // array<int,4> arr = {1,0,2,1};
    // int n = 4;
    // vector<int> xored;
    // for(int i = 0; i < n-1; i++){
    //     xored.push_back(arr[i]^arr[i+1]);
    // }
    // for(auto it : xored){
    //     cout << it << " ";
    // }
    // cout << endl;
    vector<int> encoded = {1,2,3};
    int first = 1;
    vector<int> ans;
    ans.push_back(first);
    for(int i = 0; i < encoded.size(); i++){
        ans.push_back(encoded[i]^ans.back());
    } 
    for(auto it : ans){
        cout << it << " ";
    }
    return 0;
}