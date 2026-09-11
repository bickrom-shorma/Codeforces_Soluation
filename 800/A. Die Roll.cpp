#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int maxRoll = max(a, b);
    int favorableOutcomes = 7 - maxRoll;
    int totalOutcomes = 6;
    int gcdValue = __gcd(favorableOutcomes, totalOutcomes);
    cout << favorableOutcomes / gcdValue << "/" << totalOutcomes / gcdValue << '\n';

    return 0;
}
