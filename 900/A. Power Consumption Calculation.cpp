#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, P1, P2, P3, T1, T2;
    cin >> n >> P1 >> P2 >> P3 >> T1 >> T2;
    int ans = 0;
    int pr = 0;

    for (int i = 0; i < n; i++) {
        int l, r;  cin >> l >> r;
        ans += (r - l) * P1;
        if (i > 0) {
            int gap = l - pr;

            if (gap <= T1) {
                ans += gap * P1;
            }
            else if (gap <= T1 + T2) {
                ans += T1 * P1;
                ans += (gap - T1) * P2;
            }
            else {
                ans += T1 * P1;
                ans += T2 * P2;
                ans += (gap - T1 - T2) * P3;
            }
        }

        pr = r;
    }

    cout << ans << '\n';

    return 0;
}
