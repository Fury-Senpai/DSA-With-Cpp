#include <bits/stdc++.h>
using namespace std;

// calculate stock max profit - OPTIMAL SOLUTON
int calculateStockProfit(vector<int> &prices){
    int maxProfit = 0;
    int bestDay = prices[0];
    
    for(int i = 1; i<prices.size(); i++) {
        if(bestDay > prices[i]) {
            bestDay = prices[i];
        }
        
        int profit = prices[i] - bestDay;
        maxProfit = max(profit , maxProfit);
    }
    
    return maxProfit;
}
int main() {
	vector<int> prices = {7,1,5,3,6,4};
	
	int maxProfit = calculateStockProfit(prices);
	cout<<maxProfit<<endl;
	
	return 0;

}
