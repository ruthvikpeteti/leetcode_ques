class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int high = nums.size() - 1;
        int low = 0;
        while(high>=low){
            int mid = (low + high) / 2;
            if(nums[mid]==target) return 1;
            if(nums[low]== nums[mid] && nums[mid]==nums[high] && high!=low){
                low+=1;
                high-=1;
                continue;
            }
            if(nums[low]<=nums[mid]){
                if(nums[mid]<target) low = mid + 1;
                else if (nums[mid]>target) {
                    if( nums[low] <= target){
                        high = mid -1;
                    } else {
                        low = mid + 1;
                    }
                }
            } else {
                if(nums[mid]>target) high = mid - 1;
                else if (nums[mid]<target) {
                    if( nums[high] >= target){
                        low = mid + 1;
                    } else {
                        high = mid - 1;
                    }
                }
            }
        }
        return 0;
    }
};