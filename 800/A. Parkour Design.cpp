#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
      long long x, y;cin >> x >> y;
       int num = x - 2*y;
        if(num % 3 != 0){
            cout << "NO" << '\n';
            continue;
        }
        int S = num / 3;
        int minC = max(0LL, -y);
        if(S >= 0 && 2*minC <= S){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
N}
