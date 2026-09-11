#include<bits/stdc++.h>
using namespace std ;

int main(){
   int t ; cin >> t ;
    while(t--){
      int n ; cin >> n;
      int needs = 0;
      while(true){
         if(n%3==0){
            cout << needs << '\n';
            break ;
         }
         else {
            n += 1;
            needs++;
         }
      }
    }
return 0;
}
