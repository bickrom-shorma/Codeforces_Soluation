#include <bits/stdc++.h>
using namespace std;

const int ab = 2e5;

int main() {
    int t ; cin >> t;
    while(t--){
    int n;cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int freq[ab] = {0};
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (freq[a[i]] >= 3) {
            cout << a[i] << '\n';
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "-1\n";
    }
}

    return 0;
}
