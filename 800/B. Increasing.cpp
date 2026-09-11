#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
      sort(a,a+n);
      int s = 0;
      bool p = true ;
      for(int i = 0 ; i<n ;i++){
         if(s < a[i]){
            p = true;
            s = a[i];
         }
         else{
            p = false ;
            break;
         }
      }
      if(p){
         cout << "YES\n";
      }
      else {
         cout << "NO\n";
      }

    }
    return 0;
}
