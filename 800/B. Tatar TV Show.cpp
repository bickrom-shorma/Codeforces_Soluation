#include <bits/stdc++.h>
using namespace std;
int main(){
  int t; cin>>t;
  while(t--){
     int n,k; cin>>n>>k;
     string s; cin>>s;
      bool ok=true;
       for(int r=0;r<k;r++){
            int cnt=0, sum=0;
            for(int j=r;j<n;j+=k){
                cnt++;
                sum += (s[j]=='1');
            }
            if(cnt==1){
                if(sum!=0){
                  ok=false;
                }
            } else {
                if(sum%2!=0){
                    ok=false;
                }
            }
        }
        cout << (ok? "YES":"NO") << '\n';
    }
}
