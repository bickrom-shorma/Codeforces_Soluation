#include <bits/stdc++.h>
using namespace std;

int main() {
    char a[4][4];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int black = 0, white = 0;

            for (int x = i; x < i + 2; x++) {
                for (int y = j; y < j + 2; y++) {
                    if (a[x][y] == '#')
                        black++;
                    else
                        white++;
                }
            }

            if (black >= 3 || white >= 3) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;
}
