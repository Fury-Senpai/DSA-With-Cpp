#include <bits/stdc++.h>
using namespace std;

int main() {
	// Binary to Decimal 
	
	int binaryNum;
	int pow = 1;
	int ans = 0;
	
	cin >> binaryNum;
	
	while(binaryNum > 0) {
	    int digit = binaryNum % 10;
	    binaryNum = binaryNum /10;
	    
	    ans = (digit * pow) + ans;
	    pow = pow * 2;
	    
	}
	
	cout << ans;

}
