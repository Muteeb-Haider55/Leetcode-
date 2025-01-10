class Solution
{
    public:
        int maxProfit(vector<int> &prices)
        {
            int maxProfit = 0;
            int min_price = INT_MAX;
            for (int price: prices)
            {
                min_price = min(price, min_price);
                int profit = price - min_price;
                maxProfit = max(maxProfit, profit);
            }
            return maxProfit;
        }
};