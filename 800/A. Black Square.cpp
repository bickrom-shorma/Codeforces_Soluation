#include<bits/stdc++.h>

using namespace std ;

int main(){
 int a , b , c , d ;
 cin >> a >> b >> c >> d;

 char s[1000000];
 cin >> s ;
 int len = strlen(s);
 int cal = 0 ;
 for(int i = 0 ; i < len ; i++){
    if(s[i]== '1'){
        cal += a;
    }
    else if(s[i]== '2'){
        cal += b ;
    }
    else if(s[i]== '3'){
        cal += c;
    }
    else {
        cal += d;
    }
}
cout << cal << '\n';

return 0;
}
