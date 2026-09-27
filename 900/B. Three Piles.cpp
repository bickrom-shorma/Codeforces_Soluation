#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b, c;
        cin >> a >> b >> c;

        long long diff1 = llabs(a - b);
        long long diff2 = a + c - b;

        cout << max(diff1, diff2) << '\n';
    }

    return 0;
}
