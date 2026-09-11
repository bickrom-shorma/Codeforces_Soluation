#include <bits/stdc++.h>
using namespace std;

int const n = 1005;

int main() {
    char s[n];
    cin.getline(s, n);
    int len = strlen(s);
    bool freq[26] = {false};

    for (int i = 1; i < len - 1; i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            freq[s[i] - 'a'] = true;
            i++;
        }
    }

    int cont = 0;
    for (int i = 0; i < 26; i++) {
        if (freq[i]) {
            cont++;
        }
    }

    cout << cont << endl;
    return 0;
}
