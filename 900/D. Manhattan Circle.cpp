#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;cin >> t;
  while (t--) {
   int n, m;cin >> n >> m;
     int minRow = n, maxRow = -1;
     int minCol = m, maxCol = -1;

        for (int i = 0; i < n; i++) {
            string s;cin >> s;
            for (int j = 0; j < m; j++) {
                if (s[j] == '#') {
                    minRow = min(minRow, i);
                    maxRow = max(maxRow, i);
                    minCol = min(minCol, j);
                    maxCol = max(maxCol, j);
                }
            }
        }
        int cRow = (minRow + maxRow) / 2;
        int cCol = (minCol + maxCol) / 2;

        cout << cRow + 1 << " " << cCol + 1 << '\n';
    }

    return 0;
}
