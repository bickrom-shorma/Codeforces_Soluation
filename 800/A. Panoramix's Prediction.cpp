#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    int nextPrime = -1;
    for (int i = a + 1; ; ++i) {
        if (isPrime(i)) {
            nextPrime = i;
            break;
        }
    }

    if (nextPrime == b) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }

    return 0;
}
