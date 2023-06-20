class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        set<int> seti;
        set<int> setj;
        for(int i = 0; i < matrix.size(); i++){
            for(int j = 0; j < matrix[i].size(); j++){
                if(matrix[i][j] == 0){
                    seti.insert(i);
                    setj.insert(j);
                }
            }
        }
        for(auto it : seti){
            for(int j = 0; j < matrix[0].size(); j++){
                matrix[it][j] = 0;
            }
        }
        for(auto it : setj){
            for(int i = 0; i < matrix.size(); i++){
                matrix[i][it] = 0;
            }
        }
        
    }
};