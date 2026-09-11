#include<bits/stdc++.h>
using namespace std ;

int main(){
   int s1,s2,s3,s4 ; cin >> s1 >> s2 >> s3 >> s4 ;
   int a[4] = {s1,s2,s3,s4} ;

   int change = 0;

   for(int i = 0 ; i<4;i++){
      for(int j = i+1 ; j<4 ; j++){
         if(a[i] == a[j]){
            change++;
         }
      }
      if(change == 3){
               break;
            }
      if(change == 2){
          i++;
      }
   }
   cout << change << '\n';


return 0;
}
