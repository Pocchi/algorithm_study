#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> time(N + 1);
  vector<int> x(N + 1);
  vector<int> y(N + 1);
  //初期値
  time.at(0) = 0;
  x.at(0) = 0;
  y.at(0) = 0;
  for (int i = 1; i < N + 1; i++) {
    cin >> time.at(i) >>  x.at(i) >> y.at(i);
  }
  bool flag = true;
  for (int i = 0; i < N; i++) {
      // 同じ場所にいることはできない
      if (x.at(i) == x.at(i + 1) && y.at(i) == y.at(i + 1)) {
        flag = false;
        break;
      }
      // 移動量が時間以下かどうか
      int x_move = x.at(i + 1) - x.at(i);
      int y_move = y.at(i + 1) - y.at(i);
      x_move = x_move < 0 ? -x_move : x_move;
      y_move = y_move < 0 ? -y_move : y_move;
      int move = x_move + y_move;
      int time_move = time.at(i + 1) - time.at(i);
      if (move > time_move)  {
        flag = false;
        break;
      }
  }
  string result = flag ? "Yes" : "No";
  cout << result << endl;
}