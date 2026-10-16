class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int j,k,sum;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i<nums.size() ; i++)
        {
            j=i+1;
            k=nums.size()-1;
            while(j<k){
                sum= nums[i] + nums[j] + nums[k];
                if(sum == 0)
                {
                    ans.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[j] == nums[j+1]){j++;};
                    while(j<k && nums[k] == nums[k-1]){k--;};
                    j++;
                    k--;
                }
                else if(sum<0)
                {
                    while(j<k && nums[j] == nums[j+1]){j++;};
                    j++;
                }
                else
                {
                    while(j<k && nums[k] == nums[k-1]){k--;};
                    k--;
                }
                while(i<nums.size()-1 && nums[i+1] == nums[i]){ i++; }
            }
        }
        return ans;
    }
};