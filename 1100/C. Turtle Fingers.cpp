#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        long long a, b, l; cin >> a >> b >> l;
        set<long long> s;
        for (long long pa = 1; ; ) {
            for (long long pb = 1; ; ) {
                long long p = pa * pb;
                if (l % p == 0) {
                    s.insert(l / p);
                }
                if (pb > l / b) break;
                pb *= b;
            }
            if (pa > l / a) break;
            pa *= a;
        }
        cout << s.size() << '\n';
    }
    return 0;
}
