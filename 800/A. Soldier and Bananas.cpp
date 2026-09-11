#include<bits/stdc++.h>
using namespace std ;

int main(){
  int k , n , w ; cin >> k >> n >> w ;
  int long long  total = 0;

  for(int i=1 ; i<=w ; i++){
     total += i*k ;
  }
  int long long ans = total-n;
  if(ans>0){
  cout << ans << '\n';
  }
  else {
   cout << "0" << '\n';
  }

return 0;
}
}
