#include <bits/stdc++.h>
#define rep(i,n) for ( int i = 0; i < (int)(n); i++)
using namespace std;
 
int main() {
  int n;
  cin >> n;
  vector<int> data(n);
  rep (i, n) cin >> data.at(i);


  // 並び替え
  for (int i = 0; i < n; i++) {
    int maxData = data[i];
    for (int j = i + 1; j < n; j++) {
      if (maxData > data[j]) {
        int tmpi = data[i];
        int tmpj = data[j];
        data[i] = tmpj;
        data[j] = tmpi;
        maxData = tmpj;
      }
    }
  }

  int a = 0;
  int b = 0;

  rep (i, n) {
    if (i % 2 == 1) {
      a += data[i];
    } else {
      b += data[i];
    }
  }

  int result = b - a;
  
  cout << result << endl;
}
