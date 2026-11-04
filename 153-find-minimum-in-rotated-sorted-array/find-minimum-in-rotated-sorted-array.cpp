class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int ans = INT_MAX;
        while(high>=low){
            int mid = (high + low)/2;
            if( nums[mid] < nums[high] && nums[low] > nums[mid] ){
                high = mid;
                ans=min(ans,nums[mid]);
            } else if ( nums[low] < nums[mid] && nums[high] < nums[mid] ){
                low = mid;
                ans=min(ans,nums[mid]);
            } else if ( nums[low] <= nums[mid] && nums[mid] < nums[high] ){
                return nums[low];
            } else {
                return nums[high];
            }
        }
        return ans;
    }
};