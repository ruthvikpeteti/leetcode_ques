#include <cmath>
#include <algorithm>
class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        int ans = -1;
        while(high>=low){
            int mid = (high + low) / 2;
            int sum = 0;
            for(int i : nums){
                sum+=ceil(double(i)/double(mid));
            }
            if(sum<=threshold){
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};