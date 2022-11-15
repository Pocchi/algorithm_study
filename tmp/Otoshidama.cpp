#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int N, Y; // N枚、Y円
  cin >> N >> Y;
  int count = 0;
  int number1 = -1;
  int number2 = -1;
  int number3 = -1;
  rep(i, N) {
    rep(j, N) {
      rep(k, N) {
          if (10000 * i + 5000 * j + 1000 * k == Y && i + j + k == N) {
            number1 = i;
            number2 = j;
            number3 = k;
            break;
          }
      }
    }
  }
  cout << number1 << " " << number2 << " " << number3 << endl;
}

