class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ans=nums.size()-1;
        int low=0;
        int high=nums.size()-1;
        if(nums[nums.size()-1]<target) return nums.size();
        while(high>=low){
            int mid = (high+low)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            } else {
                low=mid+1;
            }
        }
        return ans;
    }
};