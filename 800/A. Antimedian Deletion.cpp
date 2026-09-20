#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> p(n);
        for(int i = 0; i < n; i++) cin >> p[i];

        int ans = (n == 1) ? 1 : 2;

        for(int i = 0; i < n; i++){
            cout << ans;
            if(i < n-1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
