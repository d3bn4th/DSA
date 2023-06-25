class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int  mid;
        long long time_taken = 0;
        int k = high;
        while(low <= high){
            mid = low + (high - low)/2;
            time_taken = 0;
            for(int i = 0; i < piles.size(); i++){
                if(piles[i]%mid == 0){
                    time_taken += piles[i]/mid;
                }
                else{
                    time_taken += piles[i]/mid + 1;
                }
            }
            if(time_taken <= h){
                k = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        } 
        return k;
    }  
};