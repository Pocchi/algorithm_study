#include <bits/stdc++.h>
using namespace std;

int main()
{

  int X, Y, N;

  cin >> X;
  cin >> Y;
  cin >> N;
  int count = 0;
  int result = 0;
  while (true)
  {
    if (count == N)
    {
      break;
    }

    count += 1;
    result += X;
  }
  cout << result << endl;

  return 0;
}