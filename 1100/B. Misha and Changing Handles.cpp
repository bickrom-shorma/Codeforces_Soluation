#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;cin >> q;
    map<string, string> mp;
    while (q--) {
        string oldH, newH; cin >> oldH >> newH;
        bool found = false;
        for (auto &p : mp) {
            if (p.second == oldH) {
                p.second = newH;
                found = true;
                break;
            }
        }
        if (!found) {
            mp[oldH] = newH;
        }
    }
    cout << mp.size() << '\n';
    for (auto p : mp) {
        cout << p.first << " " << p.second << '\n';
    }
    return 0;
}
