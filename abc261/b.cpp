#include <bits/stdc++.h>
using namespace std;

int main()
{

  int N;
  cin >> N;

  vector<vector<char>> data(N, vector<char>(N));

  for (int i = 0; i < N; i++)
  {
    string tmp;
    cin >> tmp;
    for (int j = 0; j < N; j++)
    {
      data[i][j] = tmp[j];
    }
  }

  bool incorrect = false;
  // COMMENT: 二重で判定してしまうので効率が悪いけど条件は通る
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (i == j)
      {
        // 何もしない
      }
      else
      {

        if (data[i][j] == 'D' && data[j][i] == 'D')
        {
          // ドローはOK
        }
        else if (data[i][j] == 'W' && data[j][i] == 'L')
        {
          // iの勝利
        }
        else if (data[i][j] == 'L' && data[j][i] == 'W')
        {
          // jの勝利
        }
        else
        {
          incorrect = true;
        }
      }
    }
  }

  cout << (incorrect ? "incorrect" : "correct") << endl;

  return 0;
}