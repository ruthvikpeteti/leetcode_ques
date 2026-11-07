class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 0;
        int high = num;
        while(high>=low){
            long long int mid = low + (high - low) /2;
            long long int sqr = mid * mid;
            if(sqr == num){
                return true;
            } else if ( sqr < num){
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return false;
    }
};