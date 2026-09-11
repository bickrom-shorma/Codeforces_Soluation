#include<bits/stdc++.h>
using namespace std ;

int main(){
 int n ; cin >> n;
  int a[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  bool Hard = true;

  for(int i = 0;i < n;i++){
    if(a[i] == 1){
        Hard = false ;
        break;
    }
    else {
        Hard = true ;
    }
  }
  if(Hard==false){
    cout << "HARD" << '\n';
  }
  else {
    cout << "EASY" << '\n';
  }


return 0;
}
