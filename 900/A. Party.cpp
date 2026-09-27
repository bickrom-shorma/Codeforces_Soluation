#include<bits/stdc++.h>
using namespace std;

int n;
int p[2001];
int d[2001];

int get(int i) {
    if (d[i] != 0){
      return d[i];
    }
    if (p[i] == -1){
      return d[i] = 1;
    }
    return d[i] = get(p[i]) + 1;
}

int main(){
    cin >> n;
    for (int i = 1; i <= n; i++){
      cin >> p[i];

    }
    int ans = 0;
    for (int i = 1; i <= n; i++){
       ans = max(ans, get(i));
    }

    cout << ans << '\n';

return 0;
}
