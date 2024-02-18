#include <bits/stdc++.h>
using namespace std;

int int_pow(int tei, int sisu) {
  int value = 1;
  if (sisu == 0) return 1;
  for (int i = 1; i <= sisu; i++) {
      value *= tei;
  }

  return value;
}

int main(){
  vector<int> vec;
  int num;
  int ans = 0;

  while (cin >> num) {
    vec.push_back(num);
  }

  for (int i = 0; i <= vec.size(); i++) {
    if (vec[i] == 1) {
      ans += int_pow(2, i);
      cout << "i = " << i << ", value = " << ans << endl;
      
      // cout << ans << endl;
    }
  }

  cout << ans << endl;
  cout << int_pow(2, 3);
}
