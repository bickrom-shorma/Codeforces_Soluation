
#include<bits/stdc++.h>

using namespace std ;

int main(){
  int n , s ; cin >> n >> s ;
  int a[n];
  for(int i = 0 ; i<n ; i++){
    cin >> a[i];
  }
  int sum = 0;
  for(int i = 0 ; i<n ; i++){
     sum += a[i];
  }
  int maxi = 0;
  for(int i = 0 ; i<n ; i++){
    if(a[i] > maxi){
        maxi = a[i];
    }
  }
 int mugs = sum - maxi;
 if(mugs <= s){
    cout << "YES" << '\n';
 }
 else {
    cout << "NO" << '\n';
 }


return 0;
}
