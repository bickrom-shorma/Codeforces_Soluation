#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long lastTime = 0;
    long long mx = 0;
    long long q = 0;

    for (int i = 0; i < n; i++) {
        long long t, c;
        cin >> t >> c;

        q = max(0LL, q - (t - lastTime));
        q += c;

        mx = max(mx, q);
        lastTime = t;
    }

    lastTime += q;

    cout << lastTime << " " << mx << endl;

    return 0;
}
