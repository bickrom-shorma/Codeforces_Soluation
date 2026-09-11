#include<bits/stdc++.h>
using namespace std ;
const int N = 109;
char a[N] ;
int main(){
    int t ; cin >> t;
    while(t--){

        cin >> a;
        int b = strlen(a);
        if(b>10){
        cout << a[0] << b-2 << a[b-1] << '\n';
        }
        else {
            cout << a << '\n';
        }
    }
}
