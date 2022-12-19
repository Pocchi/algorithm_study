#include <bits/stdc++.h>
using namespace std;

int main()
{

  string S;
  cin >> S;

  map<int, bool> m;

  for (int i = 0; i < 10; i++)
  {
    m[i] = false;
  }

  for (int i = 0; i < 9; i++)
  {
    int tmp = S[i] - '0'; // charからintへ変換
    m[tmp] = true;
  }

  for (int i = 0; i < 10; i++)
  {
    bool b = m.at(i);
    if (!b)
    {
      cout << i << endl;
      break;
    }
  }

  return 0;
}