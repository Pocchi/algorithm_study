#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
using namespace std;

int ruijou(int a, int b) {
  int result = a;
  rep(i, b - 1) {
    result *= a;
  }
  return result;
}

int main() {
  
  
}

