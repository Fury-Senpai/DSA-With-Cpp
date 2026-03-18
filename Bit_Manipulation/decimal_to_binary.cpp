#include <bits/stdc++.h>
using namespace std;

int main() {
	// Decimal to Binary 
	
	int num;
	int pow = 1;
	int ans = 0;
	cin >> num;
	
	while(num > 0) {
	    int remainder = num % 2;
	    num = num / 2;
	    ans = (remainder * pow) + ans;
	    pow = pow * 10;
	}
	
	cout << ans;

}
