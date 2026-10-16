class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int k,l,n=nums.size();
        long long int sum;
        for(int i=0; i<n-3; i++){
            if(i>0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; j<n-2;j++){
                if(j!=i+1 && nums[j] == nums[j-1]) continue;
                k=j+1;
                l=n-1;
                while(k<l){
                    sum = (long long)nums[i]+nums[j]+nums[k]+nums[l];
                    if(sum == target){
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        while(k<l && nums[k] == nums[k+1]) k++;
                        k++;
                        while(k<l && nums[l] == nums[l-1]) l--;
                        l--;
                    }
                    else if(sum<target){
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        return ans;
    }
};