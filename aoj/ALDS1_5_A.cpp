#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, q; 
  cin >> n;
  vector<int> A(n);
  long long dp[20][2000] = {0}; // dp[n][m]
  for (int i = 0; i < n; i++) {
    cin >> A[i];
  }

  cin >> q;
  vector<int> m(q);
  int maxM = 0;
  for (int i = 0; i < q; i++) {
    cin >> m[i];
    maxM = max(m[i], maxM);
  }

  vector<int> results(maxM + 1); // 0からmaxMまで 値が作れたら1が入る

  // DPループ
  for (int i = 0; i < n; ++i) {
    for (int sumM = 0; sumM <= maxM; ++sumM) { // 足し算で作れる数 maxのmの値
      // i番目のA要素を選ぶ場合
      if (sumM - A[i] >= 0) {
        dp[i+1][sumM] = max(dp[i+1][sumM], dp[i][sumM - A[i]] + A[i]);
      }
      // i番目のA要素を選ばない場合
      dp[i+1][sumM] = max(dp[i+1][sumM], dp[i][sumM]);
      
      // 最終的にjと同じ数になったら、1を入れる
      if (dp[i+1][sumM] == sumM) {
        results[sumM] = 1;
      }
    }
  }

  // yes、noを出力する
  for (int i = 0; i < q; ++i) {
    int mValue = m[i];
    string str = results[mValue] == 1 ? "yes" : "no";
    cout << str << endl;
  }

}

