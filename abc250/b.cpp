#include <bits/stdc++.h>
using namespace std;

int N, A, B;

void line(bool startWhite)
{
  bool white = startWhite;

  for (int j = 0; j < N; j++)
  {
    for (int w = 0; w < B; w++)
    {
      if (white)
      {
        cout << '.';
      }
      else
      {
        cout << '#';
      }
    }
    white = !white;
  }
}

int main()
{
  cin >> N;
  cin >> A;
  cin >> B;

  bool startWhite = true;
  for (int i = 0; i < N; i++)
  {
    for (int h = 0; h < A; h++)
    {
      line(startWhite);
      cout << endl;
    }
    startWhite = !startWhite;
  }
}
