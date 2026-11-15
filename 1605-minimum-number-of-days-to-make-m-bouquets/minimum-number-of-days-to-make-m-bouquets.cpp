class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long int)m*k>bloomDay.size()) return -1;
        int ans = -1;
        int count = 0;
        int high = INT_MIN, low = INT_MAX;
        for( int i : bloomDay){
            if(i>high) high = i;
            if(i<low) low = i;
        }
        while(high>=low){
            int count = 0;
            int mid = (high + low) / 2;
            int counter = 0;
            for(int i : bloomDay){
                if(i<=mid){
                    counter++;
                } else {
                    count += counter/k;
                    counter=0;
                    if(count>=m) ans = mid;
                }
            }
            count += counter/k;
            counter=0;
            if(count>=m) ans = mid;
            if(count>=m){
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};