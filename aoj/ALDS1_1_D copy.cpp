#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> data(n);
  int minv;
  int maxv;
  for (int i = 0; i < n; i++) {
    cin >> data[i];
    if (i == 0) {
      minv = data[i];
      maxv = data[i];
    } else {
      minv = min(minv, data[i]);
      maxv = max(maxv, data[i] - minv);
    }
  }
  cout << maxv << endl;
}