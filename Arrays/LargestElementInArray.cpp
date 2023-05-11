#include<bits/stdc++.h>
using namespace std;

// 1 . Approach 1
// O(NLogN) sorting approach

int sortArr(vector<int>& arr){
    sort(arr.begin(), arr.end());
    return arr[arr.size() -1];
}
int main(){
    vector<int> arr1 = {1,2,3,4,5,5};
    cout << sortArr(arr1);
    return 0;
}

// 1 . Approach 2
// O(N) max variable approach
int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int max = arr[0];
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << max << endl;

    return 0;
}