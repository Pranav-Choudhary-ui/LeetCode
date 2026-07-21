// Last updated: 21/07/2026, 09:06:05
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l = 0;
        int h = letters.size()-1;
        int mid;
        int ans = 0;
        while(l<=h){
            mid = l+(h-l)/2;
            if(letters[mid] > target){
                ans = mid;
                h = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return letters[ans];
    }
};