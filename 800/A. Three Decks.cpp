#include<bits/stdc++.h>
using namespace std ;

int main(){
  int t ; cin >> t ;
  while(t--){
   int a,b,c; cin >> a >> b >> c;
   int sum = a+b+c;
   if(sum % 3 == 0 && a <= sum/3 && b <= sum/3 && c >= sum/3){
     cout << "YES" << '\n';
  }
  else {
    cout << "NO" << '\n';
    }
  }
return 0;
}
