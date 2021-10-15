#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

bool prm(int a){
    bool prme;
    prme = true;
    if (a == 1) prme = false;
    for (int i = 2; i <= sqrt(a); i++){
        if (a % i == 0) {
            prme = false;
            break;
        }
    }
    return prme;
}

int main() {
    int a;
    cin >> a;
    if (prm(a)) cout << "prime";
    else cout << "composite";
    return 0;
}