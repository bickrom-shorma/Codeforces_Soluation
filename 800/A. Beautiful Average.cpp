#include<bits/stdc++.h>
using namespace std ;

int main(){
   int t ; cin >> t;

   while(t--){
       int n ; cin >> n ;
       int a[n];
       for(int i=1;i<=n;i++){
          cin >> a[i] ;
       }
      int maxi = 0;
      for(int i=1;i<=n;i++){
         maxi = max(a[i],maxi);
      }
      cout << maxi << '\n';
   }

 return 0;
 }
