#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    while (t--) {
        int n;cin >> n;
        int a1, a2, a3;
        cin >> a1 >> a2 >> a3;
        int strong = min(a1, min(a2, a3));
        int weak = n - strong;
        cout << weak << endl;
    }

    return 0;
}
