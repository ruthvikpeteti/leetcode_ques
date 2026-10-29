class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct=-10;
        int pre=1, suf=1;
        int siz=nums.size();
        for(int i=0;i<siz;i++){
            pre*=nums[i];
            suf*=nums[siz-1-i];
            maxProduct=max(maxProduct,max(suf,pre));
            if(nums[i]==0){
                pre=1;
            }
            if(nums[siz-i-1]==0){
                suf=1;
            }

        }
        return maxProduct;

    }
};