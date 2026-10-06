#include<bits/stdc++.h>
using namespace std;

const long long MOD = 676767677;

long long countDivisors(long long n){
    long long cnt = 0;
    for(long long i = 1; i*i <= n; i++){
        if(n%i==0){
            cnt++;
            if(i != n/i) cnt++;
        }
    }
    return cnt % MOD;
}

int main(){
    int t;cin>>t;
    while(t--){
        long long x, y;
        cin>>x>>y;
        long long S = x - y;
        long long absS = abs(S);

        if(absS == 0){
            cout << 1 << "\n";
            for(int i=0;i<x;i++) cout<<"1 ";
            for(int i=0;i<y;i++) cout<<"-1 ";
            cout<<'\n';
        } else {
            cout << countDivisors(absS) << '\n';
            if(S > 0){
                for(int i=0;i<x;i++) cout<<"1 ";
                for(int i=0;i<y;i++) cout<<"-1 ";
            } else {
                for(int i=0;i<y;i++) cout<<"-1 ";
                for(int i=0;i<x;i++) cout<<"1 ";
            }
            cout<<'\n';
        }
    }
    return 0;
}
