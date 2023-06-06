#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {2,3,5};
    vector<int> _union;
    int i = 0;
    int j = 0;
    while(i < a.size() && j < b.size()){
        if(a[i] <= b[j]){
            if(_union.size() == 0 || _union.back() != a[i]){
                _union.push_back(a[i]);
    
            }
            i++;
        }
        else{
            
            if(_union.size() == 0 || _union.back() != b[j]){
                _union.push_back(b[j]);
            }
            j++;
        }
    }
    if(i < a.size()){
        while(i < a.size()){
            if(a[i] != _union.back()){
                _union.push_back(a[i]);
            }
            i++;
        }
    }
    if(j < b.size()){
        while(j < b.size()){
            if(b[j] != _union.back()){
                _union.push_back(b[j]);
            }
            j++;
        }

    }
    for(auto it : _union){
        cout << it << " ";
    }
    return 0;
}