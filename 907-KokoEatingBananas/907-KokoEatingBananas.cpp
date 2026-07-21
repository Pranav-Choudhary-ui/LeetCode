// Last updated: 21/07/2026, 09:05:54
class Solution {
public:
    bool canEat(vector<int>& piles, int k, int h){
        int res = 0;
        for(int i=0;i<piles.size();i++){
            res = res + (piles[i] + k - 1) / k;
            if(res > h){
                return false;
            }
        }
        if(res > h){
           return false;
        }
        else{
            return true;
        }
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int r = *max_element(piles.begin(),piles.end());
        int res;

        while(l < r){
            int mid = l + (r-l)/2;

            if(canEat(piles,mid,h)){
                r = mid;
            }
            else{
                l = mid+1;
            }
        }
        return l;
    }
};