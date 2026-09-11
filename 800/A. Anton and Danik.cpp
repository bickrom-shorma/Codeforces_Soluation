#include<bits/stdc++.h>

using namespace std ;

int main(){
   int n ; cin >> n;
   cin.ignore();
   char a[n+5] ;
   cin.getline(a,n+5);
   int len = strlen(a);
   int cont_a = 0;
   int cont_d = 0;
   for(int i = 0 ; i< len ; i++){
    if(a[i]=='A'){
        cont_a++;
    }
    else {
        cont_d++;
    }
   }
   if(cont_a > cont_d){
     cout << "Anton" << '\n';
   }
   else if(cont_a==cont_d){
      cout << "Friendship"  << '\n';
   }
   else {
    cout << "Danik" << '\n';
   }

return 0;
}
