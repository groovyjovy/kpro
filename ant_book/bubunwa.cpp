#include <bits/stdc++.h>
using namespace std;

int a[4] = {1, 2, 4, 7};
int n, k;

bool dfs(int i, int sum) {
  if (i == n) return sum == k;

  if (dfs(i + 1, sum)) return true;

  if (dfs(i + 1, sum + a[i])) return true;

  return false;
}

int main() { // main関数をint型に変更
  n = 4; // これらの代入をmain関数内に移動
  k = 13;

  if (dfs(0, 0)) printf("Yes\n");
  else printf("No\n");

  return 0; // 正常終了を示すために0を返す
}
