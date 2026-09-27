#include <bits/stdc++.h>
using namespace std;

int main() {
    int press[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> press[i][j];

    int dx[] = {0, 0, 0, -1, 1};
    int dy[] = {0, -1, 1, 0, 0};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int k = 0;
            for (int d = 0; d < 5; d++) {
                int ni = i + dx[d];
                int nj = j + dy[d];
                if (ni >= 0 && ni < 3 && nj >= 0 && nj < 3) {
                    k += press[ni][nj];
                }
            }
            cout << (k % 2 == 0 ? '1' : '0');
        }
        cout << "\n";
    }

    return 0;
}
