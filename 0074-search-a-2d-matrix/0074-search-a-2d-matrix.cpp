class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Binary Search in 2D Array
        int n = matrix.size();
        int m = matrix[0].size();
        int low  = 0;
        int high = n*m - 1;
        int mid;
        while(low <= high){
            mid = low + (high - low)/2;
            int mid_ele = matrix[mid/m][mid%m];
            if( mid_ele == target){
                return true;
            }
            else if(mid_ele > target){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return false;
    }   
};