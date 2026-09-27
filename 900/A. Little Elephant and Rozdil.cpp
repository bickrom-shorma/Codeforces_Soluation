#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;

    vector<long long> times(n + 1);
    long long min_time = LLONG_MAX;
    int min_index = -1;
    int count_min = 0;

    for(int i = 1; i <= n; i++) {
        cin >> times[i];
        if(times[i] < min_time) {
            min_time = times[i];
            min_index = i;
            count_min = 1;
        } else if(times[i] == min_time) {
            count_min++;
        }
    }

    if(count_min == 1) {
        cout << min_index << '\n';
    } else {
        cout << "Still Rozdil" << '\n';
    }

    return 0;
}
