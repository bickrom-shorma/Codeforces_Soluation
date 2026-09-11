#include <bits/stdc++.h>
using namespace std;

int x = 0;
char s[4];

int main() {
    int n;
    cin >> n;

    while (n--) {
        cin >> s;

        if ((s[0] == '+' || s[1] == '+') ||(s[1] == '+' || s[2] == '+')) {
            x += 1;  // Increment x
        }
        else if ((s[0] == '-' || s[1] == '-') || (s[1] == '-' || s[2] == '-')) {
            x -= 1;  // Decrement x
        }
    }

    cout << x << '\n';
    return 0;
}
