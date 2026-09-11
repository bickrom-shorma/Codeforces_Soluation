#include<bits/stdc++.h>
using namespace std ;

int main(){
  int t ; cin >> t ;

  while(t--){
     int a,b,n ; cin >> a >> b >> n;
     int op = 0;
     while(n>=a && n>= b){
          if(a>b){
            b += a;
            op++;
          }
          else {
            a += b;
            op++;
          }
     }
     cout << op << '\n';
  }

return 0;
}
