#include<bits/stdc++.h>
using namespace std ;

int main(){
  int n,k ; cin >> n >> k ;
  int a[n];
  for(int i = 1 ; i<=n ; i++){
   cin >> a[i] ;
  }
  int  b = a[k];
  int  count_select = 0;
  for(int i = 1 ; i<= n ; i++){
    if( a[i] > 0 && a[i] >= b){
      count_select++;
    }
  }
  cout << count_select << '\n';

return 0;
}
