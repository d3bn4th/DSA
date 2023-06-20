#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "is2 sentence4 This1 a3";
    vector<string> vec;
    string word = "";
    for(int i = 0; i < s.size(); i++){
        if(s[i] != ' '){
            word.push_back(s[i]);
        }
        else{
            vec.push_back(word);
            word = "";
        }
    } 
    for(auto it : vec){
        cout << it << endl;
    }
    map<int,string> mp;
    for(auto it : vec){
        // mp[it.back() - '0'] = it[];
    }

    return 0;
}