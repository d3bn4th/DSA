#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    if(s.size() %2 != 0){
        return false;
    }
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '['  || s[i] == '{'){
            st.push(s[i]);
        }
        if(s[i] == ')'){
            if(!st.empty()){
                if(st.top() != '('){
                return false; 
                }
                else{
                    st.pop();
                }
            }
            else{
                return false;
            }
        }
        if(s[i] == ']'){
            if(!st.empty()){
                if(st.top() != '['){
                return false; 
                }
                else{
                    st.pop();
                }
            }
            else{
                return false;
            }
        }
        if(s[i] == '}'){
            if(!st.empty()){
                if(st.top() != '{'){
                return false; 
                }
                else{
                    st.pop();
                }
            }
            else{
                return false;
            }
        }
    }
    if(!st.empty()){
        return false;
    }
    return true; 
}

int main(){
    string s = "()[]{}";
    if(isValid(s)){
        cout << "true";
    } 
    else{
        cout << "false";
    }
    return 0;
}