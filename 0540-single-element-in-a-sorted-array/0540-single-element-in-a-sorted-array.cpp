class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
       int n = nums.size();
       if(n == 1){
           return nums[0];
       }
       int low = 0;
       int high = n-1;
       int mid;
       while(low <= high){
           int mid = low + (high-low)/2;
           if(mid > 0 && mid < n-1){
               if(nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]){
                   return nums[mid];
               }
               else if(nums[mid] == nums[mid - 1]){
                   int numel = mid - low + 1;
                   int numer = high - mid;
                   if(numel%2 != 0){ 
                       // eliminate left half
                    high = mid;
                   } 
                   else{ // eliminate right half
                    low = mid + 1;
                   }
               }
               else{
                   int numel = mid - low;
                   int numer = high - mid + 1;
                   if(numel%2 != 0){ 
                       // eliminate left half
                    high = mid - 1;
                   } 
                   else{ // eliminate right half
                    low = mid;
                   }

               }
           }
           else if(mid == 0){
               if(nums[mid] != nums[mid + 1]){
                   return nums[mid];
               }
           }
           else{
               if(nums[mid] != nums[mid - 1]){
                   return nums[mid];
               }
           }
       }
       return -1;
    }
};