#include <bits/stdc++.h>
using namespace std;

int main() {
    char a[8][8];
    int ans = 0;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 8; i++) {
        bool black = true;
        for (int j = 0; j < 8; j++) {
            if (a[i][j] == 'W') {
                black = false;
                break;
            }
        }
        if (black) {
            ans++;
        }
    }
    if (ans == 8) {
        cout << 8 << '\n';
        return 0;
    }
    for (int j = 0; j < 8; j++) {
        bool black = true;
        for (int i = 0; i < 8; i++) {
            if (a[i][j] == 'W') {
                black = false;
                break;
            }
        }

        if (black) {
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}
