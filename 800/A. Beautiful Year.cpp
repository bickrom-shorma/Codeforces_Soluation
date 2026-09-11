#include<bits/stdc++.h>
using namespace std ;

int year (int n){
   int d4 = n%10;
     n /= 10;
    int d3 = n%10;
    n /= 10;

    int d2 = n%10;
     n /=10;
     int d1 = n%10;

     if(d1 !=d2 && d1 != d3 && d1 != d4&& d2 != d3 && d2 != d4 && d3 != d4){
          return true ;
     }
     else {
        return false;
     }


}

int main(){

 int n ; cin >> n;

 while(n++){
    if(year(n)){
        cout << n << '\n';
        return 0;
    }
 }

return 0;
}
