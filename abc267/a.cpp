#include <bits/stdc++.h>
using namespace std;

int main()
{
  map<string, int> score;

  score["Monday"] = 5;
  score["Tuesday"] = 4;
  score["Wednesday"] = 3;
  score["Thursday"] = 2;
  score["Friday"] = 1;

  string a;
  cin >> a;
  cout << score[a] << endl;

  return 0;
}