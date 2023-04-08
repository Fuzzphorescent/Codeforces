#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, f;
    cin >> n >> f;
    int products[n];
    for (int i = 0; i < n; i++) {
        int k, l;
        cin >> k >> l;
        products[i] = min(k*2, l);
    }
    int sum = 0;
    sort(products, products + n);
    for (int i = n-1; i > n-1-f; i--) {
        sum += products[i];
    }
    
    cout << sum;
    return 1;
}