#include<bits/stdc++.h>
using namespace std;

int main(){
    // int n = 3;
    // int arr[n][n] = {{1,2,3},{4,5,6},{7,8,9}};
    
    int n = 4;
    int arr[n][n] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    // Mirror about 45deg axis
    // arr[i][j] = arr[i + (n-1) - max(i,j)][j + (n-1) - max(i,j)];
    for(int i = 0; i <= n/2; i++){
        for(int j = 0; j <= n/2; j++){
            if((i + j) < n-1 && (i != j)){
                swap(arr[i][j], arr[i + (n-1) - max(i,j)][j + (n-1) - max(i,j)]);
            }
            else if((i + j) < n -1 && (i == j)){
                swap(arr[i][j],arr[n -1 - i][n - 1 -j]);
            }
        }
    }
    // mirror about horizontal axis
    for(int i = 0; i < n/2; i++){
        for(int j = 0; j < n; j++){
            swap(arr[i][j], arr[(n-1) - i][j]);
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}