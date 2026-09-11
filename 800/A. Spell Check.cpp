#include<bits/stdc++.h>
using namespace std ;

int main(){
 int t ; cin >> t ;

 while(t--){
    int n ; cin >> n;
    char s[12];
    cin >> s ;
    int len = strlen(s);
    int cont_T = 0,cont_i= 0,cont_m = 0,cont_u=0,cont_r=0;
    if(n == 5){
        for(int i = 0 ; i < n ; i++){
           if(s[i]=='T') cont_T ++;
           if(s[i]=='i') cont_i++;
           if(s[i]=='m') cont_m++;
           if(s[i]=='u') cont_u++;
           if(s[i]=='r') cont_r++;
        }
    }
    if(cont_T==1 && cont_i==1 && cont_m==1 && cont_u==1 && cont_r==1){
      cout << "YES" << '\n';
    }
    else {
      cout << "NO" << '\n';
    }


 }
return 0;
}
