#include<bits/stdc++.h>
using namespace std;


// Trick Solution 
// solution : https://www.youtube.com/watch?v=BHr381Guz3Y
// TC -> O(N)
// SC -> O(1)
int main(){
    vector<int> arr = {1,2,3,4,5};
    int k = 3; // rotate by k spaces
    
    k = k%(arr.size()); // to eliminate excesive rotations 

    cout << "Array: ";
    for(auto it : arr) {
        cout << it << " ";
    }
    cout << endl;
    // Rotate the entire array
    int l = 0;
    int r = arr.size()-1;
    while(l < r){
        int temp; 
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }
    
    // Rotate first k spaces
    l = 0;
    r = k-1;
    while(l < r){
        int temp; 
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }

    // Rotate the remainingn elements
    l = k;
    r = arr.size()-1;
    while(l < r){
        int temp; 
        temp = arr[l];
        arr[l] = arr[r];
        arr[r] = temp;
        l++;
        r--;
    }

    cout << "Rotated Array: ";
    for(auto it : arr) {
        cout << it << " ";
    }
    return 0;
}