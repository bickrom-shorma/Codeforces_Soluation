#include<bits/stdc++.h>
using namespace std ;

int main(){
   int t ; cin >> t ;
   while(t--){
       int n ; cin >> n ;
       int a[n];
       for(int i=0;i<n;i++){
         cin >> a[i];
       }
       sort(a,a+n);
       int answer = a[0] + 1;
       int an = 1 ;
       for(int i=1 ;i <n ;i++){
           an *= a[i];
      }

       cout << an*answer << '\n';
  }

   return 0;
}
