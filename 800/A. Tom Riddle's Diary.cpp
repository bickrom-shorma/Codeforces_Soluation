#include<bits/stdc++.h>
using namespace std;

int main() {

  int n;cin >> n;
  set<string> si;
   for (int i = 0; i < n; i++) {
        string s;cin >> s;
        if (si.count(s)){
         cout << "YES" << '\n';
        }
        else {
         cout << "NO" << '\n';
         si.insert(s);
        }
    }

    return 0;
}
