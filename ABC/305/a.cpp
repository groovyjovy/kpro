#include <bits/stdc++.h>
using namespace std;

#include <atcoder/modint>
using namespace atcoder;

int main() {
    int a;
    int amari;
    cin >> a;
    amari = a % 5;
    if (amari <= 2) {
      cout << (a / 5) * 5 << endl;
    } else {
      cout <<  (a / 5 + 1) * 5  << endl;
    }
}
