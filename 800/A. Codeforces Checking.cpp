#include<bits/stdc++.h>

using namespace std ;

int main(){
  int t ; cin >> t ;

  while(t--){
    int n = 1;
    char s[n];
    for(int i=0; i<n;i++){
        cin >> s[i];
    }
    for(int i = 0 ; i < n ; i++){
    if(s[0]=='c' || s[0]=='o' || s[0]=='d' || s[0]=='e' || s[0]=='f' || s[0]=='r'|| s[0]== 's' ){
        cout << "YES" << '\n';
    }
    else {
        cout << "NO" << '\n';
    }
  }
}

return 0;
}
