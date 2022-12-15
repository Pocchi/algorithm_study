#include <bits/stdc++.h>
using namespace std;

/*
int main()
{

  long long A, B, C, D, E, F;
  cin >> A;
  cin >> B;
  cin >> C;
  cin >> D;
  cin >> E;
  cin >> F;

  long long result = (A * B * C) - (D * E * F);
  cout << result % 998244353 << endl;

  return 0;
}
*/
// TODO: 案の定オーバーフローしてWAになったので以下解説を見ながら書き直し
// 計算前に各変数について, 998244353 で割ったあまりを求めた後に積を取れば良い
