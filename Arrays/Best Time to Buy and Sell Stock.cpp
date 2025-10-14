class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;   
        int maxProfit = 0;        
        
        for (int price : prices) {
            minPrice = min(minPrice, price);       
            maxProfit = max(maxProfit, price - minPrice); 
        }
        
        return maxProfit;
    }
};



class Solution {
public:
    int maxProfit(std::vector<int>& prices) {
        int buy = prices[0];
        int profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < buy) {
                buy = prices[i];
            } else if (prices[i] - buy > profit) {
                profit = prices[i] - buy;
            }
        }
        return profit;
    }
};
