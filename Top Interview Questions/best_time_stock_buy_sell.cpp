/* 
	@Author - Jatin Goel
	@Institute - IIIT Allahabad
	Hardwork definitely pays off. 
	There is no substitute of hardwork.
	There is no shortcut to success. 
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
		int profit = 0;
        int n = prices.size();
		int i=0;
        int buy,sell;
		while(i < n-1)
		{	
			while(i < n-1 && prices[i] >= prices[i+1])
				i++;

			if(i == n-1)
				break;

			buy = i++;

			while(i < n && prices[i] >= prices[i-1])
				i++;
			
			sell = i-1;
            profit += prices[sell] - prices[buy];

		}
        return profit;
    }
};