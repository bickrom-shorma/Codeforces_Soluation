#include<bits/stdc++.h>

using namespace std ;

int main(){
  int n ; cin >> n ;
  cin.ignore();
  char a[n+2] ;
  cin.getline(a,n+2);

  int len = strlen(a);
  int cont = 0;
  for(int i = 0 ; i < len ; i++){
    if(a[i]==a[i+1]){
        cont++;
    }
  }
  cout << cont << '\n';

return 0;
}
