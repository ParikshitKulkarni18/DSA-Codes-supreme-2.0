class Solution {
public:

  void maxProfitFinder(vector<int>& prices , int i,int&minPrice,int&maxProfit)
{
    // base case 

 if (i == prices.size()){
    return;
 }

    // solve 1 case
  if (prices[i] < minPrice)  minPrice = prices[i];
  int TodaysProfit = prices[i] - minPrice;
  if (TodaysProfit > maxProfit)  maxProfit = TodaysProfit; 

    // recursive call
    maxProfitFinder(prices,i+1,minPrice,maxProfit);
}    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = INT_MIN;

        maxProfitFinder(prices,0,minPrice,maxProfit);
        return maxProfit; 
    }
};