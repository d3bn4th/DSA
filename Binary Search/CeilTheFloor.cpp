#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
    sort(arr, arr + n);    
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    int low = 0;
    int high = n - 1;
    int mid;
    while(low <= high){
        mid = low + (high - low)/2;
        if(arr[mid] == x){
            return make_pair(arr[mid], arr[mid]);
        }
        else if(arr[mid] > x){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    cout << mid << " - "  << arr[mid] << endl;
    if(mid > 0 && mid < n-1){
        if(arr[mid] < x){
            return make_pair(arr[mid], arr[mid + 1]);
        }
        else{
            return make_pair(arr[mid-1], arr[mid]);
        }
    }
    else if(mid == 0){
        if(arr[mid] < x){
            return make_pair(arr[mid], arr[mid + 1]);
        }
        else{
            return make_pair(-1,arr[mid]);
        }
    }
    else{
        if(arr[mid] > x){
            return make_pair(arr[mid-1], arr[mid]);
        }
        else{
            return  make_pair(arr[mid], -1);
        }
    }
    
}

int main() {
    int arr[] = {37,11};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 27;
    auto ans = getFloorAndCeil(arr, n, x);
    cout << ans.first << " " << ans.second << "\n";
    return 0;
}