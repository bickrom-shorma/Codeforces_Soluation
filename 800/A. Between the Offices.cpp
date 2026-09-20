#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;cin >> n;
   string s;cin >> s;
   int count_s_to_f = 0;
   int count_f_to_s = 0;
   int i = 0;
   while(i < n - 1) {
      if(s[i] == 'S' && s[i + 1] == 'F') {
            count_s_to_f++;
            i++;
        }
        else if(s[i] == 'F' && s[i + 1] == 'S') {
            count_f_to_s++;
            i++;
        }
        else {
            i++;
        }
    }

    if(count_s_to_f > count_f_to_s){
      cout << "YES" << '\n';
    }
    else{
    cout << "NO" << '\n';

    }

    return 0;
}
