#include<bits/stdc++.h>
using namespace std ;

int main(){
   int t ; cin >> t ;

     while(t--){
        int a,b,c,d ; cin >> a >> b >> c >> d;
        int cont = 0;
        if(a<b) cont++;
        if(a<c) cont++;
        if(a<d) cont++;
        cout << cont << '\n';
     }

 return 0;
 }
