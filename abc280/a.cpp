#include <bits/stdc++.h>
using namespace std;

int main()
{

  int H, W;

  cin >> H;
  cin >> W;

  int count = 0;
  for (int i = 0; i < H; i++)
  {
    for (int j = 0; j < W; j++)
    {
      char S;
      cin >> S;
      if (S == '#')
      {
        count++;
      }
    }
  }

  cout << count << endl;

  return 0;
}