#include<bits/stdc++.h>
using namespace std ;

int main(){
  int n ; cin >> n;
  int a[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }
  int oficier = 0;
  int crime = 0;

  for(int i=0;i<n;i++){
    if(a[i] == -1){
      if(oficier >0){
         oficier--;
      }
      else {
         crime++;
      }
    }
    else {
       oficier += a[i];
    }
  }
  cout << crime << '\n';

return 0;
}
