#include<bits/stdc++.h>
using namespace std;

int main(){
 int n ; cin >> n;
 char a[n] ;
 for(int i=0;i<n;i++){
    cin >> a[i];
 }
 int mod = n/11;
 int cont8 =0;
 for(int i=0;i<n;i++){
    if(a[i]== '8'){
        cont8++;
    }
 }
if(n%11>=0){
    if( cont8 >= mod){
        cout << mod << '\n';
    }
    else if(cont8 < mod) {
        cout << cont8 << '\n';
    }
    else {
        cout << "0" << '\n';
    }
}

return 0;
}
