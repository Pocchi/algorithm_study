#include <bits/stdc++.h>
using namespace std;

int main()
{

  string S;

  cin >> S;
  int size = S.size();
  bool big = false;
  bool small = false;
  bool w = false;
  map<char, bool> str;
  for (int i = 0; i < size; i++)
  {
    char t = S[i];
    if (str[t])
    {
      w = true;
    }
    else
    {
      str[t] = true;
    }

    if (t >= 'A' && t <= 'Z')
    {
      big = true;
    }
    else
    {
      small = true;
    }
  }

  string result = big && small && !w ? "Yes" : "No";
  cout << result << endl;

  return 0;
}