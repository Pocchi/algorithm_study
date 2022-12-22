#include <bits/stdc++.h>
using namespace std;

int main()
{

  int V, A, B, C;
  cin >> V >> A >> B >> C;

  int amari = V;
  while (true)
  {
    int a = amari - A;
    int b = a - B;
    int c = b - C;
    if (a < 0)
    {

      cout << "F" << endl;
      break;
    }
    else if (b < 0)
    {

      cout << "M" << endl;
      break;
    }
    else if (c < 0)
    {

      cout << "T" << endl;
      break;
    }
    amari = c;
  }

  return 0;
}