#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin >> n;
        vector<int> a(n);
        for (auto &x : a) cin >> x;

        long long sum = 0;
        int curMin = a[0];
        sum += curMin;
        for (int i = 1; i < n; i++){
            curMin = min(curMin, a[i]);
            sum += curMin;
        }

       cout << sum << '\n';
    }
    return 0;
}
