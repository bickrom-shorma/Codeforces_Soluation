#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n;
        string s;   cin >> n >> s;
        set<char> st;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (st.find(s[i]) == st.end()) {
                ans += n - i;
                st.insert(s[i]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
