#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  // 基本的にchar型の配列として扱われる
  string S, ans;
  ans = "";

  // 標準入力を受け取る
  cin >> N;
  cin >> S;

  for (char element: S) {
    ans += element;
    ans += element;
  }
  cout << ans << endl;
}