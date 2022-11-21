#include <bits/stdc++.h>
using namespace std;

int main()
{

  string S = "atcoder";
  int L, R;

  cin >> L;
  cin >> R;
  for (int i = L - 1; i < R; i++)
  {
    char t = S[i];
    cout << t;
  }
  cout << endl;

  return 0;
}