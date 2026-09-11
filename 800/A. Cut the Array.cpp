#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> p(n + 1, 0);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            p[i + 1] = (p[i] + a[i]) % 3;
        }

        bool found = false;
            for (int l = 1; l < n - 1 && !found; l++) {
            for (int r = l + 1; r < n; r++) {
                int s1 = p[l];
                int s2 = (p[r] - p[l] + 3) % 3;
                int s3 = (p[n] - p[r] + 3) % 3;
                bool allSame = (s1 == s2 && s2 == s3);
                bool allDiff = (s1 != s2 && s2 != s3 && s1 != s3);

                if (allSame || allDiff) {
                    cout << l << " " << r << "\n";
                    found = true;
                    break;
                }
            }
        }

        if (!found) {
            cout << "0 0\n";
        }
    }
    return 0;
}
