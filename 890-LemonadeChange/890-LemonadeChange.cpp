// Last updated: 03/08/2026, 16:06:37
class Solution {
public:
    bool req(vector<int>& change, int x){
        while(change[20] != 0 && x >= 20){
            x -= 20;
            change[20]--;
        }
        while(change[10] != 0 && x >= 10){
            x -= 10;
            change[10]--;
        }
        while(change[5] != 0 && x >= 5){
            x -= 5;
            change[5]--;
        }

        if(x != 0){
            return false;
        }
        return true;
    }
    bool lemonadeChange(vector<int>& bills) {
        int n = bills.size();
        vector<int> change(21);
        for(int i=0;i<n;i++){
            if(!req(change, bills[i]-5)){
                return false;
            }
            change[bills[i]]++;
        }
        return true;
    }
};