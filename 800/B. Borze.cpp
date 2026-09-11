#include<bits/stdc++.h>

using namespace std ;

int main(){
 char a[205];
 cin >> a ;
 int len = strlen(a);
 int i = 0;
 while(i<len){
    if(a[i]=='.'){
        cout<< "0";
        i++;
    }
    else if(a[i] == '-'){
            if(a[i+1]== '-'){
            cout << "2";
    }
    else if(a[i+1]=='.'){
        cout << "1";
    }
    i+=2 ;
  }
 }
 cout << '\n';
return 0;

}
