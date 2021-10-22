#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int s;
  cin >> s;
  int sum = 0;

  sum += s / 100;
  s -= s / 100 * 100;
  
  sum += s / 10;
  s -= s / 10 * 10;

  sum += s;
  cout << sum << endl;
}
