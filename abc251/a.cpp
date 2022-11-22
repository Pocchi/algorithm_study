#include <bits/stdc++.h>
using namespace std;

int main()
{

  string S;

  cin >> S;
  int size = S.size();
  int e = 6 / size;
  for (int i = 0; i < e; i++)
  {
    cout << S;
  }
  cout << endl;

  return 0;
}