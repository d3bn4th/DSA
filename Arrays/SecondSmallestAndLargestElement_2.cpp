#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,4,-10,7,7,5};
    int n = sizeof(arr)/ sizeof(arr[0]);
    int mx = INT_MIN;
    int smx = INT_MIN;
    int mn = INT_MAX;
    int smn = INT_MAX;
    
    for(int i = 0; i < n; i++){
        if(arr[i] > mx){
            smx = mx;
            mx = arr[i];
        }
        if(arr[i] > smx && arr[i] != mx){
            smx = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] < mn){
            smn = mn;
            mn = arr[i];
        }
        if(arr[i] < smn && arr[i] != mn){
            smn = arr[i];
        }
    }


    cout << "Largest : " << mx << endl;
    cout << "Second Largest : " << smx << endl;
    cout << "Smallest : " << mn << endl;
    cout << "Second Smallest : " << smn << endl;


    return 0;
}