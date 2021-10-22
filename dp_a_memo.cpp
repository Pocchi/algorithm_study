#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

// 入力
int N;
long long h[100010];
// メモ用のDPテーブル
long long dp[100010];

long long rec(int i) {
  // DPの値が更新されていたらそのままリターン
  if (dp[i] < INF) return dp[i];
  // 足場0のコストは0
  if (i == 0) return 0;
  // i-1, i-2それぞれ試す
  long long res = INF;
  // 足場i-1から来た場合
  res = min(res, rec(i - 1) + abs(h[i] - h[i - 1]));
  if (i > 1) res = min(res, rec(i-2) + abs(h[i] - h[i - 2]));
  return dp[i] = res;
}


int main() {
  cin >> N;
  for (int i = 0; i < N; ++i) cin >> h[i];
  
  for (int i = 0; i < 100010; i++) dp[i] = INF;

  // 答え
  cout << rec(N - 1) << endl;
}