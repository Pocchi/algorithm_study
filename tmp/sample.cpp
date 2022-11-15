#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;
  // ここにプログラムを追記
  int i = 1;
  while(i <= N) {
    int B;
    string op;
    cin >> op >> B;

    if (op == "+") {
      A += B;
    } else if (op == "-") {
      A -= B;
    } else if (op == "*") {
      A *= B;
    } else if (op == "/" && B != 0) {
      A /= B;
    } else {
      cout << "error" << endl;
      break;
    }
    cout << i << ":" << A << endl;
    i ++;
  }
}