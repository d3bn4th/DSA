#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5};
    int d = 2;
    int n = 5;
    int temp[n];
    for(int i = 0; i < n; i++){
        temp[(i-d) % n] = arr[i];
    }
    // for(int i = 0; i < n; i++){
    //     cout << temp[i] << " ";
    // }
    
    for(int i = 0; i < n; i++){
        if(i-d < 0){
            cout << n + (i - d) <<" ";
        }
        else {
            cout << abs(i-d)%n << " ";
        }
    }
    return 0;
}