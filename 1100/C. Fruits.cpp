#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> price(n);
    for (int i = 0; i < n; i++) {
        cin >> price[i];
    }

    sort(price.begin(), price.end());

    map<string, int> fruits;
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        fruits[s]++;
    }

    vector<int> cnt;
    for (auto p : fruits) {
        cnt.push_back(p.second);
    }

    sort(cnt.begin(), cnt.end(), greater<int>());

    int mn = 0, mx = 0;

    for (int i = 0; i < cnt.size(); i++) {
        mn += cnt[i] * price[i];
        mx += cnt[i] * price[n - 1 - i];
    }

    cout << mn << " " << mx << endl;

    return 0;
}
