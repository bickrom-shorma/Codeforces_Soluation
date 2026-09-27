#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int n, k;cin >> n >> k;
    long long ans = 0;
    for (int i = 1; i <= k - 1; i++) {
            ans += 2;
        }
    int re = n - (k - 1);
    ans += (1LL << re);

    cout << ans << '\n';
    }

    return 0;
}
