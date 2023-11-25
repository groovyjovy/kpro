#include <bits/stdc++.h>
using namespace std;

#include <atcoder/modint>
using namespace atcoder;

int main() {
    int n, l, r;
    int amari;
    cin >> n >> l >> r;
    vector<int> arr(n);

    for (int i=0; i<n;i++) {
      int temp = 0;
      cin >> temp;
      if (l<=temp && temp<=r ) {
        arr[i] = temp;
      } else if (temp < l) {
        arr[i] = l;
      } else {
        arr[i] = r;
      }
    }

    string ans = "";
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i];
        if (i < n - 1) {
            cout << " "; // 最後の要素以外の後に空白を出力
        }
    }
    cout <<  endl;
}
