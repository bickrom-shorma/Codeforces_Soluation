#include<bits/stdc++.h>

using namespace std ;

int main(){
  char a[105] ; cin >> a ;
  int len = strlen(a);

   int cap = 0 , small = 0 , digit = 0 , special = 0;

  if(len >= 5){
    for(int i = 0 ; i<len ; i++){
        if(a[i] >= 'A' && a[i] <= 'Z'){
            cap++;
        }
        else if(a[i] >= 'a' && a[i] <= 'z'){
            small++;
        }
        else if(a[i] >= '0' && a[i] <= '9'){
            digit++;
        }
    }
    if(cap != 0 && small != 0 && digit !=0 ){
        cout << "Correct" << '\n';
    }
    else {
        cout << "Too weak" << '\n';
    }
  }
  else {
    cout << "Too weak" << '\n';
  }

return 0;
}
