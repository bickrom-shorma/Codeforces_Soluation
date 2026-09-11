#include<bits/stdc++.h>
using namespace std ;

int main(){
  int n ; cin >> n;
  int p , q;
  int count_room = 0;
  while(n--){
    cin >> p >> q;
    if( abs(p - q)>=2){
      count_room++;
    }
  }
  cout << count_room << '\n';

return 0;
 }
