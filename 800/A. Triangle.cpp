#include <bits/stdc++.h>
using namespace std;

bool isTriangle(int a, int b, int c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

bool isSegment(int a, int b, int c) {
    return (a == b + c) || (b == a + c) || (c == a + b);
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (isTriangle(a, b, c) || isTriangle(a, b, d) || isTriangle(a, c, d) || isTriangle(b, c, d)) {
        cout << "TRIANGLE" << endl;
    }
    else if (isSegment(a, b, c) || isSegment(a, b, d) || isSegment(a, c, d) || isSegment(b, c, d)) {
        cout << "SEGMENT" << endl;
    }
    else {
        cout << "IMPOSSIBLE" << endl;
    }

    return 0;
}
