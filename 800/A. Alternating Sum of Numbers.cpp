#include<bits/stdc++.h>

using namespace std ;

int main(){
 int t ;
  cin >> t ;

 while(t--){
    int n ; cin >> n ;
    int a[n];
    int sum = 0;
    for (int i=0; i<n ;i++){
        cin >> a[i];
    }
    for (int i=0; i<n ;i+=2){
        sum += a[i];
    }
    for (int i=1; i<n ;i+=2){
        sum = sum - a[i];
    }
    cout << sum << '\n';
 }


return 0;
}
