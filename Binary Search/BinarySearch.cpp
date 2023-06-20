#include<bits/stdc++.h>
using namespace std;

// low to high is my search space


// int binarySearch(n)
template<class T>
int mybinary_search(vector<T> vrr, T target){
    int n = vrr.size();
    int high = n - 1;
    int low = 0;
    int mid;
    while(low <= high){
        // mid = (low + high)/2;
        mid = low + (high - low)/2;
        if(vrr[mid] == target){
            return mid;
        }
        else if(vrr[mid] > target){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    vector<int> vrr = {-1,0,3,5,9,12};  
    vector<char> vrr2 = {'a', 'b', 'c', 'd', 'e', 'f'};  
    int target = 9;
    int target2 = 'd';
    cout << mybinary_search<int>(vrr,target) << endl;  
    cout << mybinary_search<char>(vrr2,target2);   
    return 0;
}