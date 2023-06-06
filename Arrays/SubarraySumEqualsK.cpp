#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,0,0,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int pf[n];
    pf[0] = arr[0];
    for(int i = 1; i < n; i++){
        pf[i] = pf[i-1] + arr[i];
    }
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++){
        if(mp.find(pf[i]) == mp.end()){
            mp.insert(make_pair(pf[i], i)); 
        }
    }
    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }
    cout << "--------" << endl;
    cout << (*(mp.find(2))).second << endl;
    return 0;
}