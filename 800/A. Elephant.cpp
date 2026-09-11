#include<bits/stdc++.h>
using namespace std ;

int main(){
  int x ; cin >> x ;
  int cont = 0;
  while(x>0){
     if(x==1){
       x -= 1;
       cont++;
     }
     else if(x==2){
       x -= 2;
       cont++;
     }
     else if(x==3){
       x -= 3;
       cont++;
     }
     else if(x==4){
      x -= 4;
      cont++;
     }
     else if(x >= 5){
      x -= 5;
      cont++;
     }
  }
  cout <<  cont << '\n';
return 0;
}
