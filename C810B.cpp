#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    long long int n, f;
    cin >> n >> f;
    long long int plan[n][2];
    long long int products[n];
    for (int i = 0; i < n; i++) {
        cin >> plan[i][0] >> plan[i][1];
        products[i] = min(plan[i][0], plan[i][1]);
    }
    long long int greatest = 0;
    sort(products, products + n);
    for (int i = n-1; i > n-1-f; i++) {
        cout << products[i];
    }
}