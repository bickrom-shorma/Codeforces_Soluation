#include <bits/stdc++.h>
using namespace std;

int main(){
  int t;cin >> t;
  while(t--){
    int n; cin >> n;
    vector<int> p(n);
     p[0] = (n + 1) / 2;
     for(int i = 1; i < n; i++){
      if(i % 2 == 1){
        p[i] = p[i-1] + i;
      }
      else {
          p[i] = p[i-1] - i;
      }
  }
    for(int i = 0; i < n; i++){
      cout << p[i] << " \n"[i==n-1];
     }

    }
return 0;
}
