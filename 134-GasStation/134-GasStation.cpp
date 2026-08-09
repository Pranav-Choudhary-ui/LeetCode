// Last updated: 09/08/2026, 11:32:42
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n = cost.size();
        int price = 0;
        int fuel = 0;
        for(int i=0;i<n;i++){
            fuel += gas[i];
            price += cost[i];  
        }

        if(fuel < price){
            return -1;
        }

        int start = 0;
        int t_gas = 0;
        for(int i=0;i<n;i++){
            t_gas += gas[i] - cost[i];

            if (t_gas < 0) {
                start = i + 1;
                t_gas = 0;
            }
        }
        return start;
    }
};