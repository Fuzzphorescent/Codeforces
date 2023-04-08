#include<iostream>
using namespace std;

int main() {
    long long int n, m, a;
    cin >> n >> m >> a;
    cout << (n/a + bool(n%a)) * (m/a + bool(m%a));
}