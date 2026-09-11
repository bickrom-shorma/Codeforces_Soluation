#include<bits/stdc++.h>
using namespace std ;

const int N = 2e5 + 5;
char s[N];

int main(){
 int t ; cin >> t ;

 while(t--){
    cin >> s ;
    int len = strlen(s);
    int count_T = 0;
    for(int i=0; i<len ; i++){
       if(s[i]== 'T'){
         count_T++;
       }
    }
    for(int i = 0 ; i<count_T ; i++){
            cout << "T" ;
    }
    for(int i = 0 ; i<len ; i++){
        if(s[i] != 'T'){
            cout << s[i];
        }
    }
  cout << '\n';
 }
return 0;
}
