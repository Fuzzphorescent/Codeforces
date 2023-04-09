#include<iostream>
#include<algorithm>
using namespace std;

int main() {
    long long int n, f, sum = 0;
    cin >> n >> f;
    long long int sellout[n];
    
    for (long long int i = 0; i < n; i++) {
        long long int k, l;
        cin >> k >> l;
        long long int reg = min(k,l);
        sum += reg;
        sellout[i] = min(k*2, l) - reg;
    }
    
    sort(sellout, sellout + n);
    
    for (long long int i = n-1; i > n-f-1; i--) {
        sum += sellout[i];
    }
    
    cout << sum;
    return 0;
}
