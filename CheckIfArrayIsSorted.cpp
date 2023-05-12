#include<bits/stdc++.h>
using namespace std;

int main(){
    // start from the first index and check the previous
    // O(N)
    vector<int> arr = {1,10,2,3,3,4};
    bool flag = true;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            flag = false;
        }
    }
    if(flag == true){
        cout << "Sorted";
    }
    else{
        cout << "Not Sorted";
    }


    return 0;
}