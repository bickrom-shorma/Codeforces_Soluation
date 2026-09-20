#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        int lo = 1, hi = n + 1;
        for(int i = 0; i < n; i++){
            cout << lo++ << " " << hi++ << " " << hi++;
            if(i < n-1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
