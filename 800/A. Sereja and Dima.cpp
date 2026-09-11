#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
        for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int serija_score = 0, dima_score = 0;
    int left = 0, right = n - 1;
    bool is_serija_turn = true;

    while (left <= right) {
        if (a[left] > a[right]) {
            if (is_serija_turn) {
                serija_score += a[left];
            } else {
                dima_score += a[left];
            }
            left++;
        } else {
            if (is_serija_turn) {
                serija_score += a[right];
            } else {
                dima_score += a[right];
            }
            right--;
        }
        is_serija_turn = !is_serija_turn;
    }

    cout << serija_score << " " << dima_score << '\n';

    return 0;
}
