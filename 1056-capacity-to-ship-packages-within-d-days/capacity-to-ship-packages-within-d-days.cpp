class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low =  *max_element(weights.begin(), weights.end());
        int high = 0;
        for(int i : weights){
            high+=i;
        }
        int ans = 0;
        while(high>=low){
            int mid = (low + high) / 2;
            int sum = 0, count = 1;
            for(int i : weights){
                if((sum + i)>mid){
                    sum = i;
                    count += 1;
                } else {
                    sum += i;
                }
            }
            if(count > days){
                low = mid + 1;
            } else {
                ans = mid;
                high = mid - 1;
            }
        }
        return ans;
    }
};