#include<bits/stdc++.h>
using namespace std;

void solve() {
    long long x, y, z;
    if (!(cin >> x >> y >> z)) return;

    bool cond1 = (x & (y ^ z)) == 0;
    bool cond2 = (y & (x ^ z)) == 0;
    bool cond3 = (z & (x ^ y)) == 0;

    if (cond1 && cond2 && cond3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
   ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        solve();
    }

    return 0;
}
