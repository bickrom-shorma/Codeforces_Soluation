
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    char c;cin >> n >> m >> c;
    vector<string> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    set<char> s;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == c) {
                if (i > 0 && a[i - 1][j] != '.' && a[i - 1][j] != c)
                    s.insert(a[i - 1][j]);

                if (i < n - 1 && a[i + 1][j] != '.' && a[i + 1][j] != c)
                    s.insert(a[i + 1][j]);

                if (j > 0 && a[i][j - 1] != '.' && a[i][j - 1] != c)
                    s.insert(a[i][j - 1]);

                if (j < m - 1 && a[i][j + 1] != '.' && a[i][j + 1] != c)
                    s.insert(a[i][j + 1]);
            }
        }
    }
    cout << s.size() << '\n';
    return 0;
}
