#include <bits/stdc++.h>
using namespace std;

int main()
{

  int A, B, C, D, E, F, X;

  // A 秒間秒速 B メートルで歩き、C 秒間休む
  cin >> A;
  cin >> B;
  cin >> C;
  // D 秒間秒速 E メートルで歩き、F 秒間休む
  cin >> D;
  cin >> E;
  cin >> F;
  //  X 秒後
  cin >> X;

  int t = A + C;
  int a = D + F;
  int ttmp = (X / t * A * B);
  int atmp = (X / a * D * E);

  int countT = 0;
  for (int i = 1; i <= (X % t); i++)
  {
    if (countT < A)
    {
      countT += 1;
    }
  }
  ttmp += (countT * B);

  int countA = 0;
  for (int i = 1; i <= (X % a); i++)
  {
    if (countA < D)
    {
      countA += 1;
    }
  }
  atmp += (countA * E);

  if (ttmp == atmp)
  {
    cout << "Draw" << endl;
  }
  else if (ttmp > atmp)
  {
    cout << "Takahashi" << endl;
  }
  else
  {
    cout << "Aoki" << endl;
  }

  return 0;
}