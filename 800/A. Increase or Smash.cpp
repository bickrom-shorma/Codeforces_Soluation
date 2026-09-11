#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    for(int test = 0; test < t; test++) {
        int n;
        cin >> n;

        vector<int> target(n);
        bool has_zero = false;
        set<int> non_zero_set;

        for(int i = 0; i < n; i++) {
            cin >> target[i];
            if(target[i] == 0) {
                has_zero = true;
            } else {
                non_zero_set.insert(target[i]);
            }
        }

        int p = non_zero_set.size();
        if(p == 0) {
            cout << 0 << "\n";
        } else if(has_zero) {
            cout << 2 * p << "\n";
        } else {
            cout << 2 * p - 1 << "\n";
        }
    }

    return 0;
}
