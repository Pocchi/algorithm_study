#include <bits/stdc++.h>
using namespace std;


int N;
long long h[100010];
long long dp[100010];
int main() {
  cin >> N;
  const long long INF = 1LL << 60;
  
  for (int i = 0; i < N; i++) {
    cin >> h[i];
  }

  // 初期化 (最小化問題なので INF に初期化)
  for (int i = 0; i < N; ++i) dp[i] = INF;
  // 1つ目の足場のDP値は0
  dp[0] = 0;
  for (int i = 0; i < N; i++) {
      // ノードiから+1、+2に行く場合のスコアを更新=>緩和という
      dp[i + 1] = min(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
      dp[i + 2] = min(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
  }
  cout << dp[N-1] << endl;
}