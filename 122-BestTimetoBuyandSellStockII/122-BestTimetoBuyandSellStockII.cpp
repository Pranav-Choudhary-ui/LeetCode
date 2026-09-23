// Last updated: 23/09/2026, 12:11:45
1class Solution {
2public:
3    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
4        if(n == 0){
5            return true;
6        }
7        for(int i=0;i<flowerbed.size();i++){
8            if(flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size()-1 || flowerbed[i+1] == 0 )){
9                flowerbed[i] = 1;
10                n--;
11                if(n == 0){
12                    return true;
13                }
14            }
15        }
16        return false;
17    }
18};