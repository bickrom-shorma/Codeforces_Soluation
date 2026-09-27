#include <bits/stdc++.h>
using namespace std;

int main() {
 long long n; cin >> n;
  string s = to_string(n);
    long long original = n;

    string s2 = s;
    s2.erase(s2.size() - 1, 1);
    long long remove_last = stoll(s2);

    string s3 = s;
    s3.erase(s3.size() - 2, 1);
    long long remove_prev = stoll(s3);

    cout << max({original, remove_last, remove_prev}) << "\n";

    return 0;
}
