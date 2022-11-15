#include <bits/stdc++.h>
using namespace std;
// 入力
int N;

int main() {
  cin >> N;
  long long data[100010][3];
  long long dp[100010][3];
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> data[i][j];

    }
  }

  // 配るdpにするのでiとi + 1を比較
  for (int i = 0; i < N + 1; i++) { // N行目
    for (int j = 0; j < 3; j++) { // abc
      for (int k = 0; k < 3; k++) { // 1つ先のabcと比較
        if (j == k) { // 同じ活動は２回連続でできない
        } else {
          dp[i+1][k] = max(dp[i+1][k], dp[i][j] + data[i][j]);
        }
      }
    }
  }
  
  long long result = max(dp[N][0], max(dp[N][1], dp[N][2]));
  cout << result << endl;
}