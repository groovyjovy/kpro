#include <bits/stdc++.h>
using namespace std;

#include <atcoder/modint>
using namespace atcoder;

int main() {
    int n, l;
    int amari;
    cin >> n >> l;
    int ans = 0;

    for (int i=0; i<n;i++) {
      int temp = 0;
      cin >> temp;
      if (l <= temp) {
        ans += 1;
      }
    }

    cout << ans << endl;
}
