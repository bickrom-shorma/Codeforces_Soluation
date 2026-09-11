#include<bits/stdc++.h>
using namespace std ;

int main(){
  int n ; cin >> n ;
  int a[n];
  for(int i=1 ; i<=n ; i++){
    cin >> a[i];
  }
  int i=1;
  while(i<=n){
   for(int j=1 ; j<=n ; j++){
      if(a[j]==i){
         cout << j;
      if(i!=n){
         cout << " ";
      }
         i++;
      }
   }
  }
return 0;
}
