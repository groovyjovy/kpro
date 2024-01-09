#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, D, y, m, d;
  cin >> M >> D;
  cin >> y >> m >> d;


  if (d + 1 > D) {
    if (M == m) {
      cout << y + 1 << ' ' << 1 << ' '<< 1 << ' '<< endl;
    } else {
      cout << y << ' ' << m + 1 << ' '<< 1 << ' '<< endl;
    }
  } else {
    cout << y << ' ' << m << ' '<< d + 1 << ' '<< endl;
  }
}
