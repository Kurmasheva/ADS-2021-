#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

/*
int gcd2(int a, int b) {
    while (a > 0 && b > 0) {
        if (a > b)
            a %= b;
            // a = a % b;
        else
            b %= a;
    }
    return a + b;
}

int lcm(int a, int b) {
    return a / gcd(a, b) * b;
}

 gcd(a, b) * lcm(a, b) = a*b
 */

int main() {
    int a, b;
    cin >> a >> b;
    // cout << gcd(a, b);
    cout << gcd(a, b) << endl;
   // cout << lcm(a, b) << endl;
    return 0;
}