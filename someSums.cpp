#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n, a, b;
  cin >> n >> a >> b;
  int all = 0;
  for (int i = 1; i <= n; i++) {
    int keta = 10000;
    int tmp = i;
    int sum = 0;
    for (int j = keta; j > 0; j /= 10) {
      if (tmp >= j) {
        
        sum += tmp / j;
        tmp -= tmp / j * j;
      }
    }
    if (sum >= a && sum <= b) {
      all += i;
    }
  }
  cout << all << endl;
}
