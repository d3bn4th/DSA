#include<bits/stdc++.h>
using namespace std;


// Union of Two Sorted Arrays

// 1. Using a Set
// TC : O(3N)
// SC : O(2N)
// disadvantage : doesn't utilizes the fact that the arrays are sorted
int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {2,3,5};
    vector<int> uni;
    set<int> st;
    for(auto it : a){
        st.insert(it);
    }
    for(auto it : b){
        st.insert(it);
    }
    for(auto it : st){
        uni.push_back(it);
    }
    return 0;
}

// 2. Two Pointer Approach  
// w/o using set or map
// TC -> O(n + m)
// SC -> O(N)

vector<int> findUnion(vector<int>& a, vector<int> b){
    int n = a.size();
    int m = b.size();
    vector<int> ans;
    int p1 = 0;
    int p2 = 0;
    while(p1 < n && p2 < m){
        if(a[p1] <= b[p2]){  // Case 1 and 2
            if(ans.size() == 0 ||  ans.back() != a[p1]){
                ans.push_back(a[p1]);
            }
            p1++;
        }
        else { // Case 3
            if(ans.size() == 0 || ans.back() != b[p2]){
                ans.push_back(b[p2]);
            }
            p2++;
        }
    }

    // if elements are left
    while(p1 < n){
        if(ans.back() != a[p1]){
            ans.push_back(a[p1]);
        }
        p1++;
    }
    while(p2 < m){
        if(ans.back() != b[p2]){
            ans.push_back(b[p2]);
        }
        p2++;
    }
    return ans;
}

int main(){
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> b = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = findUnion(a,b);
    for(auto it : Union){
        cout << it << " ";
    }

}