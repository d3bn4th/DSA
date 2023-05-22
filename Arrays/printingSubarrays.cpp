#include<bits/stdc++.h>
using namespace std;

// Print subarrays
// TC = O(N^3)
int main(){
    int arr[] = {1,2,3,4,5};
    int  n = 5;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j <n; j++){
            cnt++;
            for(int k = i; k <= j; k++){
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
    cout << "Number of Subarrays : ";
    cout << cnt << endl;

    return 0;
}