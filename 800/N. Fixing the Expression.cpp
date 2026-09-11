#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        string s;
        cin >> s;

        int a = s[0] - '0';
        int b = s[2] - '0';
        if (s[1] == '<') {
            if (a < b) {
                cout << s << endl;
            } else if(a==b){
               cout << a << '=' << b << '\n';
            }
              else  {
                cout << a << '>' << b << endl;
            }
        }
        else if (s[1] == '>') {
            if (a > b) {
                cout << s << endl;
            }
            else if(a==b){
               cout << a << '=' << b << '\n';
            }
            else {
                cout << a << '<' << b << endl;
            }
        }
        else if (s[1] == '=') {
            if (a == b) {
                cout << s << endl;
            } else if (a < b) {
                cout << a << '<' << b << endl;
            } else {
                cout << a << '>' << b << endl;
            }
        }
    }

    return 0;
}
