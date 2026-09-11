#include<bits/stdc++.h>
using namespace std ;

int main(){
   int t ; cin >> t ;
     while(t--){
       string s ; cin >> s ;
       int c_a = 0;
       for(int i = 0 ; i <s.size();i++){
          if(s[i] == 'A') c_a++;
       }
        int c_b = 5-c_a;
        if(c_a > c_b) cout << "A" << '\n';
        else cout << "B" << '\n';
     }
 return 0;
 }
