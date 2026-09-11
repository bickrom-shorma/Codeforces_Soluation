#include<bits/stdc++.h>

using namespace std ;

int main(){
  int t ; cin >> t ;

  while(t--){
    int n ; cin >> n ;
    int arr[n];

    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    bool melodies_perfect = false ;

    for(int i = 0; i<n-1;i++){

        if((abs(arr[i]-arr[i+1])) == 5 || (abs(arr[i]-arr[i+1])) == 7){

            melodies_perfect = true ;
        }
        else {
            melodies_perfect = false ;
            cout << "NO" << '\n';

        }
    }
    if(melodies_perfect == true){
        cout << "YES" << '\n';
    }

  }

return  0;
}
