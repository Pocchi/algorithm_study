#include <bits/stdc++.h>
using namespace std;

const long long INF = 1LL << 60;

// 入力
int N;
int K;
long long h[100010];
// メモ用のDPテーブル
long long dp[100010];

long long rec(int i) {
  // DPの値が更新されていたらそのままリターン
  if (dp[i] < INF) return dp[i];
  // 足場0のコストは0
  if (i == 0) return 0;
  long long res = INF;
  for (int j = K; j > 0; j--) {
    if (i - j >= 0) {
      res = min(res, rec(i - j) + abs(h[i] - h[i - j]));
    }
  }
  return dp[i] = res;
}


int main() {
  cin >> N;
  cin >> K;
  for (int i = 0; i < N; ++i) cin >> h[i];
  
  for (int i = 0; i < 100010; i++) dp[i] = INF;

  // 答え
  cout << rec(N - 1) << endl;
}