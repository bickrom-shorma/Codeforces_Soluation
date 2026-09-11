#include<bits/stdc++.h>
using namespace std ;

int main(){
   int t ; cin >> t;

   while(t--){
      int x; cin >> x ;
     int a,b,c ; cin >> a >> b >> c ;

     if(x==3){
        if(c == 2 && b != 0) cout << "YES" << '\n';
        else if(c==1 && a!=0) cout << "YES" << '\n';
        else cout << "NO" << '\n';

     }
    else if(x==2){
        if(b == 3 && c != 0) cout << "YES" << '\n';
        else if(b==1 && a!=0) cout << "YES" << '\n';
        else cout << "NO" << '\n';

     }
     if(x==1){
        if(a == 2 && b != 0) cout << "YES" << '\n';
        else if(a==3 && c!=0) cout << "YES" << '\n';
        else cout << "NO" << '\n';

     }

   }
return 0;
}
