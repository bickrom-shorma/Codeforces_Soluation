#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll good(ll n) {
    ll ans = n;

    int p[] = {2, 3, 5, 7};

    for (int mask = 1; mask < 16; mask++) {
        ll product = 1;
        int cnt = 0;

        for (int i = 0; i < 4; i++) {
            if (mask & (1 << i)) {
                product *= p[i];
                cnt++;
            }
        }

        if (cnt % 2 == 1)
            ans -= n / product;
        else
            ans += n / product;
    }

    return ans;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        ll l, r;
        cin >> l >> r;

        cout << good(r) - good(l - 1) << '\n';
    }

    return 0;
}
