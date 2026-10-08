#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, b;  cin >> n >> b;
    vector<int> a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];  sum += a[i];
    }
    double x = (double)(sum + b) / n;
    for (int i = 0; i < n; i++) {
        if (x < a[i]) {
            cout << -1 << '\n';
            return 0;
        }
    }
    cout << fixed << setprecision(6);
    for (int i = 0; i < n; i++) {
        cout << x - a[i] << '\n';
    }
    return 0;
}
