#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
      int a, b, c, d;cin >> a >> b >> c >> d;

        bool cB= (a < c && c < b) || (b < c && c < a);
        bool dB = (a < d && d < b) || (b < d && d < a);

        if (cB != dB)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}
