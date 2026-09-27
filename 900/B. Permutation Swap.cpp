#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;cin >> t;
  while (t--) {
   int n;cin >> n;
   int ans = 0;
    for (int i = 1; i <= n; i++) {
      int x;cin >> x;
      int diff = abs(i - x);
       if (diff != 0) {
         ans = gcd(ans, diff);
         }
      }
        cout << ans << '\n';
    }
    return 0;
}
