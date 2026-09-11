#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }
    int take = 0, give = 0;
    for (int i = 0; i < n; i++) {
      if (a[i] >= k) {
        take += a[i];
      }
      else if(a[i]==0){
        if(take != 0){
            give++;
            take--;
        }
      }
    }
    if(give != 0){
        cout << give << '\n';
    }
    else {
        cout << "0" << '\n';
    }

  }
  return 0;
}
