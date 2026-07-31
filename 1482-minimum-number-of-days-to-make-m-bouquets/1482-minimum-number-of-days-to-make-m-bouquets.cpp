class Solution {
public:
    bool bouquets(int day, vector<int>&bloomDay,int m,int k){
        int count=0, b=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=day){
                count++;
                if(count==k){
                    b++;
                    count=0;
                }
            }
            else
                count = 0;
        }
        return b>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        long long total = 1LL*m*k;
        if(total > bloomDay.size())
            return -1;
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());

        while(low<=high){
            int mid = low + (high-low)/2;
            if(bouquets(mid,bloomDay,m,k)==true)
                high = mid-1;
            else
                low = mid+1;
        }
        return low;
    }
};