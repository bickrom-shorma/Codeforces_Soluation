#include<bits/stdc++.h>
using namespace std ;

const int n = 109;
char s[n];
int digit[n];

int main(){
  cin >> s ;
  int len = strlen(s);
  int digitid= 0;
  for(int i = 0 ; i<len ; i+=2){
    digit[digitid] = s[i] - '0';
    digitid++;
  }
 sort(digit,digit + digitid);

 for(int i = 0 ; i<digitid; i++){
    cout << digit[i];
    if(i < digitid-1) cout << "+";
 }
 cout << '\n';

return 0;
}
