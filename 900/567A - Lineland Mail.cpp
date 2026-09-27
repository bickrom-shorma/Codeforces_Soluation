#include <bits/stdc++.h>
using namespace std;

int main() {
 int n;  cin >> n;
 vector<long long> x(n);
  for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; i++) {
        long long mini;
        if (i == 0) {
            mini = x[1] - x[0];
        }
        else if (i == n - 1) {
            mini = x[n - 1] - x[n - 2];
        }
        else {
            long long l = x[i] - x[i - 1];
            long long r = x[i + 1] - x[i];

            mini = min(l, r);
        }
        long long maxi = max(
            x[i] - x[0],
            x[n - 1] - x[i]
        );
        cout << mini << " " << maxi << '\n';
    }

    return 0;
}
