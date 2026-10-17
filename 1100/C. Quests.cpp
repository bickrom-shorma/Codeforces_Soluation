
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
   while (t--) {
     int n, k; cin >> n >> k;
     vector<int> a(n), b(n);
     for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        int ans = 0, sum = 0, mx = 0;
        for (int i = 0; i < min(n, k); i++) {
            sum += a[i];
            mx = max(mx, b[i]);
            int rem = k - (i + 1);
            ans = max(ans, sum + rem * mx);
        }

        cout << ans << '\n';
    }
    return 0;
}

