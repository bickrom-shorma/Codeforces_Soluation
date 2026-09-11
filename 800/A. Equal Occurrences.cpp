#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++) {
            freq[a[i]]++;
        }

        vector<int> count_freq(n + 1, 0);
        for (auto& p : freq) {
            count_freq[p.second]++;
        }

        int max_balanced_len = 0;
        for (int f = 1; f <= n; f++) {
            int length = 0;
            for (int i = f; i <= n; i++) {
                length += (count_freq[i] * f);
            }
            max_balanced_len = max(max_balanced_len, length);
        }

        cout << max_balanced_len << endl;
    }

    return 0;
}
