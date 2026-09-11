#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;
        int arr[n + 1];
        for(int i = 1; i <= n; i++) {
            cin >> arr[i];
        }

        int ans = 0;
        for(int i = 1; i <= n; i++) {
            ans = max(ans, arr[i] - i);
        }
        cout << ans << '\n';
    }

    return 0;
}
