#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {10,4,8,3};
    int n = nums.size();
    vector<int> ans;
    vector<int> pf;
    vector<int> sf(n,0);
    pf.push_back(0);
    for(int i = 1; i < n; i++){
        pf.push_back(pf.back() + nums[i-1]);
    }
    for(auto it : pf){
        cout << it << " ";
    }
    cout << endl;
    sf[n-1] = 0;
    for(int i = n-2; i >= 0; i--){
        sf[i] = sf[i+1] + nums[i+1];
    }
    for(auto it : sf){
        cout << it << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        ans.push_back(abs(pf[i] - sf[i]));
    }
    for(auto it : ans){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}