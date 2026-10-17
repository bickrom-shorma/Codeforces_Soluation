#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;   cin >> t;
    while (t--) {
        long long x;  cin >> x;
        bool found = false;
        for (long long a = 1; a * a * a < x; a++) {
            long long b = cbrt(x - a * a * a);
            if (b >= 1 && a * a * a + b * b * b == x) {
                found = true;
                break;
            }
            b++;
            if (a * a * a + b * b * b == x) {
                found = true;
                break;
            }
        }
        if (found)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
