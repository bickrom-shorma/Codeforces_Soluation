#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, H, M;
        cin >> n >> H >> M;
        int bed = H * 60 + M;
        int minWait = INT_MAX;
        for(int i = 0; i < n; i++){
            int h, m;
            cin >> h >> m;
            int alarm = h * 60 + m;
            int diff = (alarm - bed + 1440) % 1440;
            minWait = min(minWait, diff);
        }
        cout << minWait / 60 << " " << minWait % 60 << "\n";
    }
    return 0;
}
