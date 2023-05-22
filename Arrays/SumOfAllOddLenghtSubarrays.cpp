#include<bits/stdc++.h>
using namespace std;

int main(){
    int nums[] = {1,4,2,5,3};
    int sum = 0;
    int n= 5;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if((j-i+1)%2 != 0){
                for(int k = i; k <= j; k++){
                    sum+= nums[k];
                }
            }
        }
    }
    cout << sum << endl;
    return 0;
}