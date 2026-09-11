#include<bits/stdc++.h>

using namespace std ;

int main(){
 int n  ; cin >> n ;

 int a[n];
 for(int i = 1 ; i <= n ; i++){
    cin >> a[i];
 }
 int max_value = 0;
 int max_value_indax = 0;

  for(int  i = 1 ; i<= n ; i++){
    if(max_value<a[i]){
        max_value = a[i];
        max_value_indax = i ;
    }
 }
 int maxi = 0 , maxi2  = 0;
 for(int i = 1 ; i<=n ; i++){
    if(a[i]>maxi){
        maxi2 = maxi ;
        maxi = a[i];
    }
    else if(a[i] > maxi2 && a[i] != maxi) {
            maxi2 = a[i];

 }
 }
 cout << max_value_indax << " " << maxi2 << '\n';
return 0;
}
