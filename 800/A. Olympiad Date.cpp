#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int zero = 3, one = 1, two = 2, three = 1, five = 1;
        bool found = false;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                zero--;
            }
            else if (a[i] == 1) {
                one--;
            }
            else if (a[i] == 2) {
                two--;
            }
            else if (a[i] == 3) {
                three--;
            }
            else if (a[i] == 5) {
                five--;
            }
            if (zero <= 0 && one <= 0 && two <= 0 && three <= 0 && five <= 0) {
                cout << i + 1 << '\n';
                found = true;
                break;
            }
        }

        if (!found) {
            cout << 0 << '\n';
        }
    }

    return 0;
}
