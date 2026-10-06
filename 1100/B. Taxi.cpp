#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int cnt[5] = {};
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        cnt[x]++;
    }
    int taxis = 0;
    taxis += cnt[4];
    int x = min(cnt[3], cnt[1]);
    taxis += x;
    cnt[3] -= x;
    cnt[1] -= x;
    taxis += cnt[3];
    taxis += cnt[2] / 2;
    cnt[2] %= 2;
    if (cnt[2] > 0) {
        taxis++;
        cnt[1] = max(0, cnt[1] - 2);
    }
    taxis += (cnt[1] + 3) / 4;
    cout << taxis << '\n';

    return 0;
}
