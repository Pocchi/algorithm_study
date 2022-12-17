#include <bits/stdc++.h>
using namespace std;

int main()
{

  int R, C;
  cin >> R >> C;

  vector<vector<int>> data(3, vector<int>(3));
  cin >> data.at(1).at(1);
  cin >> data.at(1).at(2);
  cin >> data.at(2).at(1);
  cin >> data.at(2).at(2);

  cout << data.at(R).at(C) << endl;

  return 0;
}