#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        string s;cin >> s;
        string com;
        for (char c : s) {
            if (c == '1') {
                com+= '1';
            } else {
                if (com.empty() || com.back() != '0') {
                    com += '0';
                }
            }
        }s
        int ones = 0, zeros = 0;
        for (char c : com) {
            if (c == '1') ones++;
            else zeros++;
        }
        if (ones > zeros) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
