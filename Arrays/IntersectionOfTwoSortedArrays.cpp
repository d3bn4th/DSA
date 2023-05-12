#include<bits/stdc++.h>
using namespace std;


// Intersection of Two Sorted Arrays

// 1. Tw Pointer Approch
int main(){
    vector<int> A  = {1,2,3,3,4,5,6,7};
    vector<int> B  = {3,3,4,4,5,8};
    vector<int> Int;
    int i = 0;
    int j = 0;
    int n = A.size();
    int m = B.size();
    while(i < n && j < m){
        if(A[i] < B[j]){
            i++;
        }
        else if(B[j] < A[i]){
            j++;
        }
        else{
            Int.push_back(A[i]);
            i++;
            j++;
        }
    }
    for(auto it : Int){
        cout << it << " ";
    }


    return 0;
}