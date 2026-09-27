#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int count=0;
    for(int i=2;i<=n;i++){
        set<int>p;
        int x=i;
        for(int j=2;j*j<=x;j++){
            while(x%j==0){
                p.insert(j);
                x/=j;
            }
        }
        if(x>1) p.insert(x);
        if(p.size()==2) count++;
    }
    cout<<count;
}
