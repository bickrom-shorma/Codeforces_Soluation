
#include<bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  cin.ignore();
  while (t--) {
    char s[12];
    cin.getline(s, 12);
    int n = strlen(s);
    char a[11] = "codeforces";
    int count_differs = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] != a[i]) {
        count_differs++;
      }
    }
    cout << count_differs << '\n';

  }

  return 0;
}
