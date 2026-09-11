#include<bits/stdc++.h>

using namespace std ;

int main(){
 int a , b ; cin >> a >> b;
 int year = 0;
 int limak = a, bob =b ;
 while(limak <= bob){
     limak *= 3;
     bob *= 2;
     year++;
 }
 cout << year << '\n';

return 0;
}
