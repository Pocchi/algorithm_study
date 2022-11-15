#include <bits/stdc++.h>
using namespace std;
// 入力
int N;
int W;
cin >> N;
cin >> W;
long long weight[110];
long long value[110];
long long dp[110][100100];

long long rec(int i, int sum_w) {
  if (dp[i][sum_w] > 0) return dp[i][sum_w];
  
  if (i == 0 && sum_w == 0) return 0;
  for (int sum_w = 0; sum_w <= W; ++sum_w) {
    // i 番目の品物を選ぶ場合
    if (sum_w - weight[i] >= 0) {
        chmax(dp[i+1][sum_w], dp[i][sum_w - weight[i]] + value[i]);
    }

    // i 番目の品物を選ばない場合
    chmax(dp[i+1][sum_w], dp[i][sum_w]);
  }
}

int main() {
  for (int i = 0; i < N; i++) {
    cin >> weight[i] >> value[i];
  }

  for (int i = 0; i < N; i++) {
    // 選んだ時
    // 選ばなかった時
  }



  
  cout << rec(N, W) << endl;
}