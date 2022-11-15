#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int highest;
  int number = 1;

  for (int i = 1; i <= N; i++)
  {
    int high;
    cin >> high;
    if (i == 1)
    {
      highest = high;
    }
    else if (high > highest)
    {
      highest = high;
      number = i;
    }
  }
  cout << number << endl;
}