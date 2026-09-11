#include<bits/stdc++.h>

using namespace std ;

int main(){
  char s[1000];

  cin.getline(s,1000);
  int len = strlen(s);

  for(int i=0;i<len;i++){
    if(s[0] >= 'a' || s[0] <= 'z'){
        s[0] = toupper(s[0]);
        break;
    }
  }
 cout << s << '\n';
return 0;
}
