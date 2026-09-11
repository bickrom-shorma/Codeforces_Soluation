#include<bits/stdc++.h>
using namespace std;

int main(){
 char a[100];
 cin >> a;
 int n = strlen(a);
 int dis = 0;
 for(int i=0;i<n;i++){
        bool distinct = true;
     for( int j =0;j<i;j++){
        if(a[i]==a[j]){
          distinct= false;
          break;
        }
     }
     if(distinct){
        dis++;
     }
    }

 if(dis%2==0){
 cout << "CHAT WITH HER!" << '\n'; }
 else {
    cout << "IGNORE HIM!" << '\n';
 }

return 0;
}
