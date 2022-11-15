#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int main() {
  int N, Y; // N枚、Y円
  cin >> N >> Y;
  int data[3]; // 0 => 10000円の枚数、１ => 5000円の枚数、 2 => 1000円の枚数
  data[0] = N;
  int sum;
  while(sum == Y && data[0] + data[1] + data[2] == N) {
    sum = 10000 * data[0] + 5000 * data[1] + 1000 * data[2];
    if (sum < N) {
      

    }
  }




          if (10000 * i + 5000 * j + 1000 * k == Y && i + j + k == N) {
            number1 = i;
            number2 = j;
            number3 = k;
            break;
          }
  cout << number1 << " " << number2 << " " << number3 << endl;
}

