#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int k = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    // Generate All Subarrays
    int len = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum = 0;
        for(int j = i; j < n; j++){
            sum+= arr[j];
            if(sum == k){
                len = max(len, j - i + 1);
            }            
        }
    }
    cout << len << endl;


    return 0;
}