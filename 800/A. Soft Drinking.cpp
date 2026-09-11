#include<bits/stdc++.h>
using namespace std ;

int main(){
   int n, k, l, c, d, p, nl, np ;
   cin >> n >> k >> l >> c >> d >> p >> nl >> np ;

   int a = (k*l)/nl;
   int ab = c*d;
   int bc = p/np;

   int ans = min(a,min(ab,bc))/n;
   cout << ans << '\n';

return 0;
}
