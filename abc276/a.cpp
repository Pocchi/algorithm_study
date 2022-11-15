#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;

  int size = S.size();
  int p = -1;

  for (int i = 0; i < size; i++)
  {
    if (S[i] == 'a')
    {
      p = i + 1;
    }
  }
  cout << p << endl;
}