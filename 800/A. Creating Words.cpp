#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin >> t;
    while(t--){
     string a , b;
     cin >> a >> b;
     swap(a[0],b[0]);
      for(int i=0;i<3;i++){
        cout << a[i] ;
      }
      cout << " ";
      for(int i=0;i<3;i++){
        cout << b[i] ;
      }
      cout << '\n';

    }

return 0;
}
 
