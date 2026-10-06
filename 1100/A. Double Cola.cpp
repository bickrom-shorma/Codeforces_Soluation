#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;cin >> n;
    vector<string> names = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
    long long sum = 0;
    long long count = 5;
    while (sum + count < n) {
        sum += count;
        count *= 2;
    }
    long long pos = n - sum - 1;
    long long copies = count / 5;

    cout << names[pos / copies] << '\n' ;
    return 0;
}
