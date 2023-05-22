#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {5,0,2,3,2,1,4};
    vector<int> ans;
    int i = 0;
    int j = 0;
    for(i; i < nums.size(); i++){
        if(nums[i]%2 == 0){
            int temp = 0;
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }
    for(auto it : nums){
        cout << it << " ";
    }
    cout << endl;
    cout << j << endl;
    sort(nums.begin(), nums.begin()+j);
    sort(nums.begin()+j,nums.end());
    for(auto it : nums){
        cout << it << " ";
    }
    cout << endl;
    return 0;
}