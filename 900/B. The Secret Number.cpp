#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;cin >> t;
  while (t--) {
    long long n;cin >> n;
    vector<long long> ans;
     long long power = 10;
        for (int k = 1; k <= 18; k++) {
            long long divisor = power + 1;
            if (divisor > n)
                break;
            if (n % divisor == 0) {
                ans.push_back(n / divisor);
            }
            power *= 10;
        }

        sort(ans.begin(), ans.end());
        cout << ans.size() << '\n';
        for (long long x : ans) {
            cout << x << " ";
        }
        cout << '\n';
    }

    return 0;
}
