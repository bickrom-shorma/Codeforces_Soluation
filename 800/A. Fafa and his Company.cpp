#include <bits/stdc++.h>
using namespace std;

int main() {

    long long n;
    if (!(cin >> n)) return 0;

    long long ans = 0;
    for (long long d = 1; d * d <= n; ++d) {
        if (n % d == 0) {
            if (d <= n / 2) ++ans;
            long long other = n / d;
            if (other != d && other <= n / 2) ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}
