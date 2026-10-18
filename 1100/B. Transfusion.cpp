#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long so = 0, se = 0;
        long long co = 0, ce = 0;

        for (int i = 1; i <= n; i++) {
            long long x;
            cin >> x;

            if (i % 2 == 1) {
                so += x;
                co++;
            } else {
                se += x;
                ce++;
            }
        }

        if (so % co != 0 || se % ce != 0 ||
            so / co != se / ce) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }

    return 0;
}
