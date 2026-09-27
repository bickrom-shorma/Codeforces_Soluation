#include<bits/stdc++.h>
using namespace std ;

int main(){
  int n ,a ; cin >> n >> a;
  int arr[n];
  for(int i = 0; i < n ; i++){
    cin >> arr[i];
  }
  for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j] > arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
  }
  int sum =  0;
  int cont = 0;
  for(int i = 0; i < n; i++){
    if(arr[i] < 0){
            cont ++ ;
          if(cont <=a){
        sum += arr[i];
    }
 }
  }
  sum = -(sum);
  cout << sum << '\n';



return 0;
}
