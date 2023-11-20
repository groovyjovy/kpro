#include <bits/stdc++.h>
using namespace std;

#include <atcoder/modint>
using namespace atcoder;

using mint = modint1000000007;

int main() {
    mint a = 10;
    a += 1000000000;

    cout << a.val() << endl;
    // a.val() = 3
}
