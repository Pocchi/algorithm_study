#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k; // 荷物の数、トラックの数
  cin >> n >> k;
  priority_queue< int, vector<int>, greater<int> > truck; // トラックの重さ
  vector<int> nimotsu(n); // 荷物の重さ

  int maxValue = 0; // 最大積載量

  for (int i = 0; i < n; i++) {
    cin >> nimotsu[i];
  }
  // 昇順にソート
  sort(nimotsu.begin(), nimotsu.end());

  // priority_queueの初期化
  for (int i = 0; i < k; i++) {
    truck.push(0);
  }
  
  while (n > 0) {// 荷物が0になるまで
    // 一番軽いトラックを選出
    int tmp = truck.top() + nimotsu[n - 1];
    truck.pop();
    // 一番軽いトラックに荷物を入れる
    truck.push(tmp);
    maxValue = max(maxValue, tmp);
    n --;
  }

  cout << maxValue << endl;
}

