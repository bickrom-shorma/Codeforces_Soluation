#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while(t--) {
      int n;
      string s;  cin >> n >> s;
        unordered_set<int> v;
        int c= 1;
        v.insert(c);
        for (int i = 0; i < n; ++i) {
            if (s[c - 1] == 'R') {
                c++;
            } else {
                c--;
            }
            v.insert(c);
        }
        cout << v.size() << '\n';
    }
    return 0;
}
