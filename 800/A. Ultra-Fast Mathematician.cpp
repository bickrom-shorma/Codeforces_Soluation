#include<bits/stdc++.h>

using namespace std ;

int main(){
 char a[102] , b[102];
 cin.getline(a,102);
 cin.getline(b,102);

 int len_a = strlen(a);
 int len_b = strlen(b);

 for(int i=0;i<len_a;i++){
    if(a[i] != b[i]){
        cout << "1" ;
    }
    else {
        cout << "0";
    }
 }
 cout << '\n';

return 0;
}
