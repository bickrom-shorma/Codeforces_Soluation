#include <bits/stdc++.h>
using namespace std;

int main() {
   int t; cin >> t;
   while (t--) {
    long long n; cin >> n;
     if (n % 2 == 1 || n < 4) {
            cout << -1 << '\n';
            continue;
        }
        long long m = n / 2;
        long long min_b = m % 2;
        long long max_b = m / 3;
        if ((max_b % 2) != (m % 2)) {
            max_b--;
        }
        long long max_buses = (m - min_b) / 2;
        long long min_buses = (m - max_b) / 2;

        cout << min_buses << ' ' << max_buses << '\n';
    }
    return 0;
}
