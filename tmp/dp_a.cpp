#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> h(N);
  vector<int> dp(N);
  for (int i = 0; i < N; i++) {
    cin >> h[i];
  }

  for (int i = 0; i < N; i++) {
    if (i == 0) {
      // 1つ目の足場のDP値は0
      dp[i] = 0;
    } else {
      // ノードiに行く場合の最少スコアを考える
      int tmp = abs(h[i-1] - h[i]) + dp[i-1];
      if (i - 2 >= 0) {
        int tmp2 = abs(h[i-2] - h[i]) + dp[i-2]; 
        tmp = min(tmp, tmp2);
      }
      dp[i] = tmp;
    }
  }
  cout << dp[N-1] << endl;
}