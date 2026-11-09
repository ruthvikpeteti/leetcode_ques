class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int largestPile =0;
        for(int i : piles) {
            largestPile=max(i,largestPile);
        }
        int low = 1;
        int high = largestPile;
        while(high>=low){
            long long int mid = ( high + low ) / 2;
            long long int sum=0;
            for( long long int i : piles){
                sum += (i + mid - 1) / mid;;
            }
            if (sum<=h){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};