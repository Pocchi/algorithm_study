#include <bits/stdc++.h>
using namespace std;

int main()
{

  int K;

  cin >> K;

  int h = K / 60;
  int m = K % 60;

  int plusHour = (21 + h) % 24;

  string hours = plusHour < 10 ? "0" + to_string(plusHour) : to_string(plusHour);
  string minutes = m < 10 ? "0" + to_string(m) : to_string(m);

  cout << hours << ":" << minutes << endl;

  return 0;
}