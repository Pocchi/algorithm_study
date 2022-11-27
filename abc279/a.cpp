#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;

  int size = S.size();
  int count = 0;

  for (int i = 0; i < size; i++)
  {
    if (S[i] == 'w')
    {
      count += 2;
    }
    else
    {
      count += 1;
    }
  }
  cout << count << endl;
}