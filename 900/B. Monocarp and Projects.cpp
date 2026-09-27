#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    long long x, y, k;cin >> x >> y >> k;
    long long d = y - x;
    long long last = x + k - 1;
    long long lo = min(d, last);
    long long sum = 0;
    if (lo >= x) {
      for (long long a = x; a <= lo; a++) {
           sum += d % a;
     }
      long long re = last - lo;
            sum += d * re;
        }
        else {
            sum += d * k;
        }
        cout << sum << '\n';
    }

    return 0;
}
