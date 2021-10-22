#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k; // 荷物の数、トラックの数
  cin >> n >> k;
  vector<int> nimotsu(n); // 荷物の重さ

  int maxValue = 0; // 最大積載量
  for (int i = 0; i < n; i++) {
    cin >> nimotsu[i];
    maxValue = max(maxValue, nimotsu[i]);
  }

  while (true) {
    int count = 0; // 荷物を入れたトラックの台数
    int truck = 0;
    int key;
    for (int i = 0; i < n; i++) {
      if (maxValue < nimotsu[i] || count > k - 1) {
        break;
      }

      int tmp = truck + nimotsu[i];
      if (tmp <= maxValue) {
        truck = tmp;
      } else {
        count ++;
        truck = nimotsu[i];
      }
      key = i;
    }
    if (count == k-1 && key == n-1) break;
    maxValue ++;
    count = 0;
  }

  cout << maxValue << endl;
}

