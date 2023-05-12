#include<bits/stdc++.h>
using namespace std;


// Trick Solution 
// solution : https://www.youtube.com/watch?v=BHr381Guz3Y
// TC -> O(N)
// SC -> O(1)
// Using in-built reverse function
int main(){
    int arr[5] = {1,2,3,4,5};
    int k = 2; // rotate by k spaces
    int n = 5;
    k = k%n; // to eliminate excesive rotations 

    cout << "Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    reverse(arr, arr + n);
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    cout << "Rotated Array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}