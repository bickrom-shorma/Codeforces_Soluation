#include<bits/stdc++.h>

using namespace std;

int main() {
    char s[105];
    cin.getline(s,105);

    int n = strlen(s);


    int count_low = 0;
    int count_up = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            count_low++;
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            count_up++;
        }
    }
    if(count_low >= count_up) {
        for(int i = 0; i < n; i++) {
            cout << (char)tolower(s[i]);
        }
        cout << '\n';
    } else {
       for(int i = 0; i < n; i++) {
            cout << (char)toupper(s[i]);
        }
        cout << '\n';
    }

    return 0;
}
