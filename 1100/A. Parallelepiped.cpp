#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;cin >> a >> b >> c;

    int x = sqrt((a * b) / c);
    int y = a / x;
    int z = b / x;

    cout << 4 * (x + y + z) << '\n';

    return 0;
}
