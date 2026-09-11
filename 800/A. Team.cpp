#include<bits/stdc++.h>
using namespace std ;

int main(){
   int n ; cin >> n ;
   int a[n][3];
   for(int i = 0 ; i<n;i++){
      for(int j=0 ; j<3 ; j++){
         cin >> a[i][j];
      }
      cout << '\n' ;
   }
   int count_slove = 0;
   for(int i = 0 ; i<n;i++){
      int sum = 0;
      for(int j=0 ; j<3 ; j++){
         if(a[i][j]==1){
            sum++;
         }
      }
      if(sum >= 2){
         count_slove++;
      }
   }
  cout << count_slove << '\n';

return 0;
}
