#include <bits/stdc++.h>
using namespace std;

#include <atcoder/modint>
using namespace atcoder;

int main() {
  char p, q;
  cin >> p >>  q;
  p -= 'A', q -= 'A';
  if (p > q) swap(p, q);
  int e[] = {3,1,4,1,5,9}, ans = 0;
  for (int i=p; i<q; i++) ans += e[i];
  cout << ans << endl;
}
