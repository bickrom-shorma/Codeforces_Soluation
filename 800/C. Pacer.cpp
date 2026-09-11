#include<bits/stdc++.h>
using namespace std;


int main(){
	int T;
	cin >> T;
	while(T--){
		int n, m, x , y;
		cin >> n >> m;
		int px = 0, py = 0;
		int p = 0;
		while(n--){
			cin >> x >> y;
			p += x - px;
			if(((x - px + 2) % 2) != ((y - py + 2) % 2))p--;
			px = x;
			py = y;
		}
		if(px != m){
			p += m - px;
		}
		cout << p << endl;
	}
}
