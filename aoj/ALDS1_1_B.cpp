#include <bits/stdc++.h>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  int maxData = max(x, y);
  int minData = min(x, y);
  int amari = minData;
  while (amari > 0) {
    amari = maxData % minData;
    maxData = minData;
    minData = amari;
  }
  cout << maxData << endl;
}