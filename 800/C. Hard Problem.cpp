#include<bits/stdc++.h>

using namespace std ;

int main(){
  int t ; cin >> t;

  while(t--){
    int m,a,b,c ; cin >> m >> a >> b >> c ;
    int total = 0 ;

    int  emty1 = 0;
    int emty2 = 0;
    if(m>a){
        emty1 = m - a ;
        total += a;
    }
    else {
        emty1 = 0;
        total += m ;
    }
    if(m>b){
        emty2 = m - b ;
        total += b;
    }
    else {
        emty2 = 0;
        total += m ;
    }
    int total_emty = emty1 + emty2 ;
    if(total_emty >= c){
        total += c;
    }
    else {
        total += total_emty;
    }
  cout << total << '\n';

  }


return 0;
}
