#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;cin >> n >> s;
    if (n % 2 == 0) {
        for (int i = 0; i < n; i += 2) {
            if (i > 0) cout << "-";
            cout << s.substr(i, 2);
        }
    } else {
        cout << s.substr(0, 3);

        for (int i = 3; i < n; i += 2) {
            cout << "-" << s.substr(i, 2);
        }
    }
    cout << '\n';
    return 0;
}
