#include<bits/stdc++.h>
using namespace std ;

int main(){
 int n, m; cin >> n >> m;
 for(int i = 1; i <=n ; i++){
    for(int j = 1 ; j<=n ; j++ ){
        if(j==i){
            cout << m << ' ';
        }
        else {
            cout << "0" << ' ';
        }
    }
    cout << '\n';
 }
return 0;
}
