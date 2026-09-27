#include<bits/stdc++.h>

using namespace std ;

int main(){
 int n ; cin >> n ;

 int arr[n];

 for(int i = 0 ; i < n ; i ++){
    cin >> arr[i];
 }
 long long sum = 0;
 int minimum_odd = 10e9;
  for(int i = 0 ; i<n ; i++){
    sum += arr[i];
    if(arr[i]%2 != 0){
        minimum_odd = min(minimum_odd,arr[i]);
    }
  }
  if(sum%2 == 0){
    cout << sum << '\n';
  }
  else {
    sum -= minimum_odd ;
    cout << sum << '\n';
  }



return 0;
}
