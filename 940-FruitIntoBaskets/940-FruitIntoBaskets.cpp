// Last updated: 21/07/2026, 09:05:52
class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int i=0, j=0, maxi=0;
        unordered_map<int, int> freq;

        while(i<fruits.size()){
            freq[fruits[i]]++;

            while(freq.size()>2){
                freq[fruits[j]]--;
                if(freq[fruits[j]] == 0){
                    freq.erase(fruits[j]);
                }
                j++;
            }
            
            maxi = max(maxi, i-j+1);
            i++;
        }
        return maxi;
    }
};