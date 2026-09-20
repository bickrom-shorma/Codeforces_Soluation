#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;cin >> t;
    for(int i = 0; i < t; i++) {
        int x;cin >> x;
        int y;
        if(x == 67) {
            y = 67;
        } else {
            y = x + 1;
        }
        cout << y << endl;
    }
    return 0;
}
