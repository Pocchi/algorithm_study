#include <bits/stdc++.h>
using namespace std;

int main()
{

  string S;

  cin >> S;
  int size = S.size();
  int center = (size + 1) / 2;
  cout << S[center] << endl;

  return 0;
}