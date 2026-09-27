#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k;cin >> n >> k;

   long long ans = LLONG_MIN;
    for(long long i = 0; i < n; i++) {
      long long f, t;cin >> f >> t;
        long long joy = f;
        if(t > k) {
      joy -= (t - k);
        }

      if(joy > ans) ans = joy;
    }

    cout << ans << '\n';
}
