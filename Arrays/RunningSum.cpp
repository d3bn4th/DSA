#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Prefix Sum
    vector<int> nums = {1,2,3,4};
    vector<int> pf;
    pf.push_back(nums[0]);
    for(int i = 1; i < nums.size(); i++){
        pf.push_back(nums[i] + pf.back());
    }
    for(auto it : pf){
        cout << it << " ";
    }
    cout << endl;

    return 0;
}