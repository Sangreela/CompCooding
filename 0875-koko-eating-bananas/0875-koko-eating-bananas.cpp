class Solution {
public:
    long long check(int n, vector<int>&piles)
        {
            long long total=0;
            for(int i:piles)
            {
                total += (i + n-1)/n;
            }
            return total;
        }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(),piles.end());
        while(low<=high)
        {
            int mid = low+(high-low)/2;
            if(check(mid, piles)>h)
                low = mid+1;
            else
                high = mid-1;
        }

        return low;
    }
};