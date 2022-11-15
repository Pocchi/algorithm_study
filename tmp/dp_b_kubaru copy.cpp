#include <bits/stdc++.h>
using namespace std;


int N;
int K;
long long h[100010];
long long dp[100010];
int main() {
  cin >> N;
  cin >> K;
  const long long INF = 1LL << 60;
  
  for (int i = 0; i < N; i++) {
    cin >> h[i];
  }

  // 初期化 (最小化問題なので INF に初期化)
  for (int i = 0; i < N; ++i) dp[i] = INF;
  // 1つ目の足場のDP値は0
  dp[0] = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 1; j < K; j++) {
      dp[i + j] = min(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
    }
  }
  cout << dp[N-1] << endl;
}