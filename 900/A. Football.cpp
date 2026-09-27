#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;cin >> s;
    int i = 0;
    bool yes = false;
    while (i < s.length()) {
        int count_1 = 1;
        for (int j = i + 1; j < s.length(); j++) {
            if (s[i] == s[j]) {
                count_1++;
                if (count_1 == 7) {
                    cout << "YES" << '\n';
                    yes = true;
                    break;
                }
            } else {
                break;
            }
        }

        if (yes) break;

        i++;
    }

    if (!yes) {
        cout << "NO" << '\n';
    }

    return 0;
}
