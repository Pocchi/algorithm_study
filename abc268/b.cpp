#include <bits/stdc++.h>
using namespace std;

int main()
{

  string S;
  string T;

  cin >> S;
  cin >> T;

  int sSize = S.size();
  string result = "Yes";

  for (int i = 0; i < sSize; i++)
  {
    if (S[i] != T[i])
    {
      result = "No";
    }
  }
  cout << result << endl;

  return 0;
}