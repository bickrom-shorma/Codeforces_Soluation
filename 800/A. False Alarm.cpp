#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t; cin >> t ;
    while(t--){
      int n, x ; cin >> n >> x ;
      int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int i = 0;
        bool p = true;
        while(i < n){
            if(a[i] == 0){
                i++;
            }
            else {
             i = i + x;
            while(i < n){
            if(a[i] == 1){
               p= false;
               break;
                    }
                    i++;
                }
                break;
            }
        }

        if(p){
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
    return 0;
}
