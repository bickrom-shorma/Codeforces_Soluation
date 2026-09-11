#include<bits/stdc++.h>
using namespace std ;

int main(){
   int n , k ; cin >> n >> k;
   int a = 4*60 ;
   int slove_mini = (a - k) ;
   int count_slove_problem = 0;

     for(int i=1 ; i<=n ; i++){
         if((i*5) <= slove_mini){
             count_slove_problem++;

             slove_mini -= (i*5);
         }
     }
     cout << count_slove_problem << '\n';

return 0;
}N
