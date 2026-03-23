#include <bits/stdc++.h>
using namespace std;

int calculatePower(double x , int n) {
    long binaryForm = n;
    double ans = 1;
    
    if(n < 0) {
        x = 1/x;
        binaryForm = -binaryForm;
    }
    while(binaryForm > 0) {
        if(binaryForm % 2 == 1) {
            ans = ans * x;
        }
        
        x *= x;
        binaryForm /= 2;
    }
    
    return ans;
}
int main() {
    double x = 2.10000;
    int n = 3;
    
    double ans = calculatePower(x , n);
    
    cout<<ans<<endl;
    
    return 0;
}
