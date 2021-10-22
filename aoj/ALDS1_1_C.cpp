#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> data(n);
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> data[i];
  }
  for (int i = 0; i < n; i++) {
    int d = data[i];
    if (d == 2) {
      // 2なら素数
      count ++;
    } else if (d % 2 == 1) {
      // 奇数の場合
      int w = 1;
      while (w <= d) {
        if (d % w == 0) {
          count ++;
          break;
        }
        w += 2;
      }
    }
  }
  cout << count << endl;
}