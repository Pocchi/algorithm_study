#include <bits/stdc++.h>
using namespace std;

int main()
{
  int A, B;
  cin >> A;
  cin >> B;

  vector<int> number = {4, 2, 1};
  vector<bool> s = {false, false, false};
  int result = 0;
  for (int i = 0; i < 3; i++)
  {
    if (A - number[i] >= 0)
    {
      A -= number[i];
      s[i] = true;
    }
    if (B - number[i] >= 0)
    {
      B -= number[i];
      s[i] = true;
    }
    if (s[i])
    {
      result += number[i];
    }
  }
  cout << result << endl;
  return 0;
}