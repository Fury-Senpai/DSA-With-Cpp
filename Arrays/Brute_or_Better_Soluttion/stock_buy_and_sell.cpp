#include <bits/stdc++.h>
using namespace std;

// calculate stock max profit - BRUTE FORCE WAY
int calculateStockProfit(vector<int> &prices){
    int maxProfit = 0;
    
    for(int i = 0; i<prices.size()-1; i++){
        int profit;
        for(int j = i+1; j<prices.size(); j++){
            profit = prices[j] - prices[i];
            maxProfit = max(profit , maxProfit);
        }
        
    }
    
    return maxProfit;
}
int main() {
	vector<int> prices = {7,1,5,3,6,4};
	
	int maxProfit = calculateStockProfit(prices);
	cout<<maxProfit<<endl;
	
	return 0;

}
