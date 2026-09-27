#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;

    while (t--) {
        long long n;cin >> n;
        int ans = 1;
        int cu= 1;

        while (n % cu == 0) {
            cu++;
        }

        ans = cu - 1;

        cout << ans << '\n';
    }

    return 0;
}
