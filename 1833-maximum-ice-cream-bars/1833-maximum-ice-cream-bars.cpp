class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
       sort(costs.begin()  , costs.end());
       int count =0;
       int i=0;
        while(coins >= 0 && count < costs.size()){
           if(costs[i]>coins)
          break;
        
            coins-=costs[i];
            count++;
           i++;
        }
        return count;
    }
};