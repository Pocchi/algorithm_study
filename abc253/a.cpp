#include <bits/stdc++.h>
using namespace std;

int main()
{

  int a, b, c;

  cin >> a;
  cin >> b;
  cin >> c;

  if ((a <= b && b <= c) || (a >= b && b >= c))
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  return 0;
}