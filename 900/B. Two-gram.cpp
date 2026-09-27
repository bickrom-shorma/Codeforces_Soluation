#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;string s;
    cin >> n >> s;
    string ans = "";
    int maxC= 0;

    for (int i = 0; i < n - 1; i++) {

        string c= s.substr(i, 2);
        int count = 0;
        for (int j = 0; j < n - 1; j++) {
            if (s.substr(j, 2) == c) {
                count+=2;
            }
        }

        if (count > maxC) {
            maxC = count;
            ans = c;
        }
    }

    cout << ans << '\n';

    return 0;
}
