#include <bits/stdc++.h>
using namespace std;

bool commonDigit(int x, int y) {
    while (x > 0) {
        int a = x % 10;
        int temp = y;

        while (temp > 0) {
            int b = temp % 10;

            if (a == b)
                return true;

            temp /= 10;
        }

        x /= 10;
    }

    return false;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        int y = 0;

        while (true) {
            if (commonDigit(x, y)) {
                cout << y << endl;
                break;
            }

            y++;
        }
    }

    return 0;
}
