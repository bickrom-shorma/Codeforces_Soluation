#include <bits/stdc++.h>
using namespace std;

long long getNextNumber(long long x) {
 long long sum = 0;
 while (x > 0) {
        long long digit = x % 10;
        sum += digit * digit;
        x /= 10;
    }
    return sum;
}
int main() {
  int t; cin >> t;
  while (t--) {
    int n; cin >> n;
    map<long long, int> fre;
    for (int i = 0; i < n; i++) {
     long long x; cin >> x;
     for (int j = 0; j < 100; j++) {
                x = getNextNumber(x);
            }
        fre[x]++;
        }
        long long ans = 0;
        for (auto p : fre) {
            int count = p.second;
            ans += 1LL * count * (count - 1) / 2;
        }
        cout << ans << '\n';
    }
    return 0;
}
