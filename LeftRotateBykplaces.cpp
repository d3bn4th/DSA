#include<bits/stdc++.h>
using namespace std;

// Doing it in the same array
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int k; cin >> k;
    if(k > n){
        k = k%n;
    }
    for(int j = 0; j  < k; j++){
        for(int i = 0; i < n-1; i++){
            int temp;
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    for(auto it : arr){
        cout << it << " ";
    }
    return 0;
}