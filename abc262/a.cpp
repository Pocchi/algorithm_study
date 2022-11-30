#include <bits/stdc++.h>
using namespace std;

int main()
{

  int Y;

  cin >> Y;

  while (true)
  {
    if (Y % 4 == 2)
    {
      cout << Y << endl;
      break;
    }
    else
    {
      Y += 1;
    }
  }

  return 0;
}