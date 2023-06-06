#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> mat = {{0, 1, 1, 1},
                                {0, 0, 1, 1},
                                {1, 1, 1, 1},
                                {0, 0, 0, 0}};
    int mx = INT_MIN;
    int index = -1;
    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(auto it : mat[i]){
            sum += it;
        }
        if(sum > mx){
            mx = sum;
            index = i;
        }
        cout << sum << " ";
    }
    cout << endl;
    cout << index<<  endl;

    return 0;
}