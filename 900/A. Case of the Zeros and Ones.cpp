#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int zero = 0, one = 0;
    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        if (c == '0')
            zero++;
        else
            one++;
    }
    int pairs = min(zero, one);
    cout << n - 2 * pairs << '\n';

    return 0;
}
